#include<bits/stdc++.h>

using namespace std;

void inserted(int arr1[],int arr2[],int m,int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    int arr3[m + n];
    while(i >= 0 && j >= 0)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k--] = arr2[j--];
        }else{
            arr3[k--] = arr1[i--];
        }
    }
    while(i >= 0)
    {
        arr3[k--] = arr1[i--];
    }
    while(j>= 0)
    {
        arr3[k--] = arr2[j--];
    }
    for(int i = 0 ; i < (m + n); i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    
cout<<"ENter the value of n"<<endl;
int m,n;
cin>>m>>n;
cout<<"Enter the value of array"<<endl;


int arr[m],arr1[n];
for(int i = 0; i < m; i++)
{
    cin>>arr[i];

}
for(int i = 0; i < n; i++)
{
    cin>>arr1[i];

}
inserted(arr,arr1,m,n);
}