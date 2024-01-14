#include<iostream>

using namespace std;

void merge(int arr[],int s,int mid,int e)
{
    // cout<<"hello3"<<endl;
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int a1[n1];

    int b1[n2];
    for(int i = 0; i < n1; i++)
    {
        a1[i]  = arr[s + i];
    }
    for(int i = 0; i < n2; i++)
    {
        b1[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0,k = s;

    while(i < n1 && j < n2)
    {
            if(a1[i] < b1[j])
            {
              arr[k] = a1[i];
            k++;
            i++;
            }
            else
            {
                arr[k] = b1[j];
                k++;
                j++;
            }
    }
    while(i < n1)
    {
        arr[k] = a1[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = b1[j];
        j++;
        k++;
    }

}
void mergeSort(int arr[],int s,int e)
{
    
    if(s < e)
    {
        int mid  = (s + e)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid + 1,e);


        merge(arr,s,mid,e);
    }
}

int main()
{

    // int arr[] = {5,4,3,7,6,9,7,8,0,1};


     int size;
   cout<<"Enter size"<<endl;
   cin>>size;
   int arr[size];
   cout<<"Enter the elements"<<endl;
   for(int i = 0; i < size; i++)
   {
    cin>>arr[i];
   }
    mergeSort(arr,0,size);
    // cout<<"hello"<<endl;


    // cout<<"hello"<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}