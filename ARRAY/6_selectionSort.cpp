#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n)
{
    for(int  i = 0; i< n ; i ++)
    {
        cout<<arr[i]<<" ";
    }
}
void selection(int *arr,int n)
{
     
      for(int  i = 0; i < (n - 1); i++)
      {
          int minIndex = i;

          for(int j = i + 1; j < n; j++)
          {
             if(arr[minIndex] > arr[j])
             {
                minIndex = j;
             }
          }
          swap(arr[minIndex],arr[i]);
          
      }
      print(arr,n);
}
int main()
{
    int arr[] = {1,5,0,2,9,6};

    selection(arr,6);
}