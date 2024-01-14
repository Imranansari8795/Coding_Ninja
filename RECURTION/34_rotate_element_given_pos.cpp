#include<iostream>

using namespace std;


void print(int arr[],int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

bool rottt(int arr[],int n)
{
  
}
void rotate(int arr[],int d,int n)
{
    int temp[n];
    int k = 0;
    for(int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for(int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for(int i = 0 ; i < n; i++)
    {
        arr[i] = temp[i];
    }

    print(arr,n);
}
int main()
{
    int size;
    cout<<"size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"element"<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"pos"<<endl;
    cin>>pos;
    rotate(arr,pos,size);
}