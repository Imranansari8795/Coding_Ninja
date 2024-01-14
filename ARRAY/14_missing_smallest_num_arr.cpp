#include "bits/stdc++.h"

using namespace std;

int main()
{
    int size;
    cout<<"size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter elements:"<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

   const int N = 1e5 + 2;

   bool check[N];
   for(int i = 0; i < N; i++)
   {
        check[i] = 0;
   }
   for(int i = 0; i < size; i++)
   {
    if(arr[i] >= 0)
    {
        check[arr[i]] = 1;
    }
   }
  
  int ans = -1;
   for(int i = 0; i < N; i++)
   {
        if(check[i] == 0)
        {
            ans = i;
            break;
        }
   }
   cout<<"missing element = "<< ans <<endl;
}