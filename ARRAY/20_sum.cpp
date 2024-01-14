#include<bits/stdc++.h>


using namespace std;


bool check(int arr[],int n,int k)
{
    int i = 0; int j = n - 1;

    while(i < j)
    {
        if(arr[i] + arr[j] == k)
        {
            return true;
        }
        else if(arr[i] + arr[j] > k)
        {
            j--;
        }else{
            i++;
        }
        
    }
    return false;
}
int main()
{
    
cout<<"Enter the value of n"<<endl;
int n;
cin>>n;

cout<<"Enter the value of array"<<endl;

int arr[n],arr1[n];
for(int i = 0; i < n; i++)
{
    cin>>arr[i];

}

cout<<check(arr,n,2)<<endl;
}