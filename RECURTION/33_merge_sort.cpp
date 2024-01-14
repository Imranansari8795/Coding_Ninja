#include<iostream>
using namespace std;


void sort_arr(int arr[],int start,int mid,int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int a1[n1];
    int b1[n2];

    for(int i = 0; i < n1; i++)
    {
        a1[i] = arr[start + i];
    }
    for(int i = 0; i < n2; i++)
    {
        b1[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0,k = 0;

    while(i < n1 && j < n2)
    {
        if(a1[i] < b1[j])
        {
            arr[k] = a1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b1[j];
            j++;
            k++;
        }
    }

    while(i < n1)
    {
        arr[k] = a1[i];
        k++;
        i++;
    }
    while( j < n2)
    {
        arr[k] = b1[j];
        j++;
        k++;
    }

}
void merge_sort(int arr[],int start,int end)
{
    if(start < end)
    {
        int mid = start - (end - start)/2;
        merge_sort(arr,start,mid);
         merge_sort(arr,mid + 1,end);
        sort_arr(arr,start,mid,end);
    }

}
int main()
{
   int size;
   cout<<"Enter size"<<endl;
   cin>>size;
   int arr[size];
   cout<<"Enter the elements"<<endl;
   for(int i = 0; i < size; i++)
   {
    cin>>arr[i];
   }

   
   merge_sort(arr,0,size - 1);

   for(int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }
}