// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int waterTraping(int *arr,int n)
{

    int leftMax[n];
    int rightMax[n];
     
     leftMax[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1],arr[i]);
    }
    rightMax[n -1] = arr[n - 1];
    for(int i = n - 2; i >=0; i--)
    {
        rightMax[i] = max(rightMax[i + 1],arr[i]);
    }
    int trapedWater = 0;
    for(int i = 0; i < n; i++)
    {
        int waterLevel = min(leftMax[i],rightMax[i]);
        trapedWater += waterLevel - arr[i];
    }
    return trapedWater;

}
int main()
{
    int n;
    cout<<"Enter size "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the element"<<endl;

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

cout<<"total trapped water : = "<<waterTraping(arr,n);

}