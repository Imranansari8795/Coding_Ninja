#include<bits/stdc++.h>

using namespace std;

void pair1(int *arr,int n)
{
    int totlpr = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
            totlpr++;
        }
        cout<<endl;
    }

    cout<<"Total pair:"<<totlpr<<endl;
    
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
pair1(arr,n);
}