#include<iostream>

using namespace std;


void quick_sort(int arr[],int size)
{
   if(size == 0 || size == 1)
   {
    return;
   }

   int counter = 0;

   for(int i = 1; i < size; i++)
   {
    if(arr[i] < arr[0])
    {
        counter++;
    }
   }

   int temp = arr[counter];
   arr[counter] = arr[0];
   arr[0] = arr[counter];


   int i = 0, j = size - 1;

   while(i < counter && j > counter)
   {
    if(arr[i] < arr[counter])
    {
        i++;
    }
    else if(arr[j] >= arr[counter])
    {
        j--;
    }
    else
    {
        int temp1 = arr[i];
        arr[i] = arr[j];
        arr[j] = temp1;
        i++;
        j--;
    }
   }
     quick_sort(arr,counter);
    quick_sort(arr+counter+1,size-1-counter);
}
int main()
{

}