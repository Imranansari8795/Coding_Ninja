#include<iostream>
using namespace std;


void print(int *arr, int size)
{
    for(int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void delete1(int *arr,int size, int k)
{
    for(int  i = k; i < size; i++)
    {
        arr[i] = arr[ i + 1];
    }
    cout<<"deletion operation"<<endl;
    print(arr, size - 1);
}

void insertion(int *arr,int size,int k,int n)
{
    // int store = size + 1;
    for(int i = size; i >= k; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[k] = n;
    cout<<"insertion operation"<<endl;
    print(arr,size + 1);
}
int main()
{
    int arr[6] = {7,8,5,6,3,9};
    int arr1[6] = {7,8,5,6,3,9};
    delete1(arr,6,2);

    insertion(arr1,6,2,10);
  






}