#include<iostream>
#include "bits/stdc++.h"
using namespace std;

void longest_Subarray(int arr[], int size)
{

int ans = 2;

int cod = arr[1] - arr[0];
int curr = 2;

int  j = 2;
while(j < size)
{
    if(cod == arr[j] - arr[j - 1])
    {
        curr++;
    }
    else
    {
        cod = arr[j] - arr[j - 1];
        curr = 2;
    }
   ans = max(ans,curr);
    j++;
}

cout<<"longest sub array = "<<ans;


}
int main()
{
//    int arr[11] = {1,2,3,5,6,7,11,8,9,10};
cout<<"Enter the size of array"<<endl;
int size;
cin>>size;
int arr[size];
cout<<"Enter the elements:"<<endl;
for(int i = 0; i < size; i++)
{
    cin>>arr[i];

}
   longest_Subarray(arr,size);
}