#include<bits/stdc++.h>
#include<vector>
using namespace std;

int first_occ(vector<int> & v,int target)
{   
    int i = 0;
    int j = v.size() - 1;
    int mid = i + (j - i)/2;
    int ans = -1;
    while(i <= j){
        if(v[mid] == target)
        {
             ans = mid;
            j = mid - 1;
        }
        else if(v[mid] > target)
        {
            j = mid - 1;
        }else{
            i = mid + 1;
        }
        mid = i + (j - i)/2;
    }
    return ans;
}

int last_occ(vector<int> &v,int k)
{
    int i =0,j = v.size() - 1;
    int mid = i + (j - i)/2;
    int ans = -1;
    while(i <= j)
    {
        if(v[mid] == k)
        {
            ans = mid;
            i = mid + 1;
        }else if(v[mid] > k)
        {
            j = mid - 1;
        }else{
            i = mid + 1;
        }
        mid = i + (j - i)/2;
    }
return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    cout<<first_occ(v,k)<<endl;

    cout<<last_occ(v,k);
}