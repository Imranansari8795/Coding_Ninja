#include<bits/stdc++.h>



// Given an integer array and its size, find the sum of the greatest and the smallest integer present in the
// array. Here 1< size <101
using namespace std;


int maxi_mini(int arr[],int n)
{
    int maxi = INT32_MIN;
    int mini = INT32_MAX;

    for(int i = 0; i < n; i++)
{
    // if(arr[i] > maxi)
    // {
    //     maxi = arr[i];
    // }
    // if(arr[i] < mini)
    // {
    //     mini = arr[i];
    // }
   maxi = max(maxi,arr[i]);
   mini = min(mini,arr[i]);
}
//  cout<<(maxi + mini)<<endl;
return (maxi + mini);

}

void reverseElement(int arr[],int n)
{
    int i = 0,j = n - 1;

    while(i < j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int twoarray(int arr1[],int arr2[],int n)
{
    int mini_1 = INT_MAX;
    int mini_2 = INT_MAX;
    int index_1,index_2 = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr1[i] < mini_1)
        {
            mini_1 = arr1[i];
            index_1 = i;
        }
        if(arr2[i] < mini_1)
        {
            mini_2 = arr1[i];
            index_2 = i;
        }
    }
    if(index_1 != index_2)
    {
        return (mini_1 + mini_2);
    }else{
        return -1;
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
for(int i = 0; i < n; i++)
{
    cin>>arr1[i];

}

// cout<<maxi_mini(arr,n)<<endl;
// cout<<reverseElement(arr,n)<<endl;

// reverseElement(arr,n);
cout<<twoarray(arr,arr1,n)<<endl;
}