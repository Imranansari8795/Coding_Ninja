#include "bits/stdc++.h"

using namespace std;

int record_Breaking(int *arr, int size)
{
    int ans = 0;
    int mx = -1;
    if(size == 1)
    {
        //  ans = 1;
        //  cout<<ans<<endl;
         return 1;
    }
    

   int i = 1;

   while(i < size)
   {
      if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
      {
       
        ans = ans + 1;

      }
    mx = max(mx,arr[i]);
   i++;
   }
   
   return ans;

}
int main()
{
   int size;
   cout<<"Enter the size"<<endl;
   cin>>size;
   int arr[size];
//    arr[size] = -1;
   cout<<"Enter the array elements:"<<endl;

   for(int i = 0; i < size; i++)
   {
    cin>>arr[i];
   }


   
   cout<<"ans = "<<record_Breaking(arr,size);
}