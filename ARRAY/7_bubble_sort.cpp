#include<iostream>
using namespace std;


void print(int *arr,int n)
{
    for(int  i = 0; i< n ; i ++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubble(int *arr,int m)
{
    for(int i = 1 ; i < (m - 1); i++)
    {
       for(int j = 0; j < (m - i); j++)
       {
          if(arr[j] > arr[j + 1])
          {
            swap(arr[j],arr[j + 1]);
          }
       }
    }
    print(arr,m);
}
int main()
{
    int arr[] = {6,7,1,5,3,0,4};

    bubble(arr,7);

}