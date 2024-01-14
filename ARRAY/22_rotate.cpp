#include<bits/stdc++.h>

using namespace std;

void rotate(int arr[],int n,int k)
{
    k = k % n;

    reverse(arr,0,k);
    reverse(arr,k,n - 1);
    reverse(arr,0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
 cout<<"ENter the value of n"<<endl;
int n;
cin>>n;

cout<<"Enter the value of array"<<endl;

int arr[n],arr1[n];
for(int i = 0; i < n; i++)
{
    cin>>arr[i];

}
int k;
cout<<"Enter K values"<<endl;
cin>>k;
rotate(arr,n,k);
}