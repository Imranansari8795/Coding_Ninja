#include<bits/stdc++.h>

using  namespace std;

int secondLargestElement(int arr[],int n)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    for(int i = 0; i < n;i++)
    {
        if(arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int  binarysearch(int arr[],int n,int k)
{
    int i = 0;
     int j = n -1;
    int mid = (i + j)/2;
     while(i <= j)
     {
        if(arr[mid] == k)
        {
            return mid;
        }
        else if(arr[mid] > k)
        {
            j = mid - 1;
        }else{
            i = mid + 1;
        }
        mid = (i + j)/2;
     }
     return -1;
}

void reverse_array(int *arr,int n)
{
    int i = 0; int j = n - 1;

    while(i < j)
    {
        swap(arr[i++],arr[j--]);
    }
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
// cout<<secondLargestElement(arr,n);
// int ans = binarysearch(arr,n,6);

reverse_array(arr,n);

// cout<<ans<<endl;
}