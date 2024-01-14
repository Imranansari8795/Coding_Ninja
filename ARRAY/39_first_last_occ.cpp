#include<bits/stdc++.h>

using namespace std;

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
int first_occur(vector<int> &v,int k)
{
    int i = 0; int j = v.size() - 1;
    int ans = -1;
    while(i <=j)
    {
        int mid = i + (j - i)/2;
        if(v[mid] == k)
        {
            ans = mid;
            j = mid - 1;
        }else if(v[mid] > k)
        {
            j = mid - 1;
        }else{
            i = mid + 1;
        }
    }
    return ans;
}
pair<int,int> occur(vector<int> &v,int k)
{
    int first = first_occur(v,k);
   int last = last_occ(v,k);
   pair<int,int> p;
   p.first = first;
   p.second = last;
   return p;
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
    pair<int,int>p = occur(v,k);
    cout<<p.first<<" "<<p.second<<endl;
    // cout<<occur(v,k);
}