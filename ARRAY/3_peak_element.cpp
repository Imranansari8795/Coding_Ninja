#include<iostream>
using namespace std;

int peak_elem(int *arr,int n)
{
    int s = 0, e = n - 1;
    int mid =( s + e )/2;
    while(s < e)
    {
       if(arr[mid]<arr[mid + 1])
       {
         s = mid + 1;
       }  
       else
       {
          e =  mid;
       } 
       mid = (s + e)/2;
    }
    return arr[s];
}
int main()
{
    // int arr[] = {5,6,7,8,3,2,1,0};
    int arr[] = {7,9,3,2,1};
    cout<<peak_elem(arr,5);
}