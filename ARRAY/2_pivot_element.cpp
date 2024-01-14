#include<iostream>
using namespace std;

int pivot_element(int *arr,int n)
{
    int s = 0, e = n - 1;
    int mid =( s + e)/2;
    while(s < e)
    {
          if(arr[mid] >= arr[0])
          {
            s = mid + 1;
          }
          else
          {
            e = mid - 1;
          }
          mid = (s + e)/2;
    }
    return s - 1;
}

int main()
{
    int arr[] = {8,10,17,21,1,3,5,6,7};

    cout<<pivot_element(arr,5)<<endl;
    
}