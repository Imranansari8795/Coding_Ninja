#include<bits/stdc++.h>

using namespace std;

void printSubarray(int *arr,int n)
{
    for(int  i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
        cout<<endl;
        }
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
printSubarray(arr,n);
}