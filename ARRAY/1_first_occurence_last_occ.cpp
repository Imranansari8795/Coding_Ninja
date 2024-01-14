#include<iostream>
using namespace std;

int first_occ(int *arr,int n,int k)
{
 
     int s = 0, e = n - 1;
     int mid = (s + e)/2;
     int ans = 0;
     while(s <= e)
     {
          if(arr[mid] == k)
          {
              ans = mid;
              e = mid - 1;
          }
          else if(arr[mid] < k)
          {
           
            s = mid + 1;
     
          }
          else
          {
            e = e - 1;
          }

          mid = (s + e)/2;
     }
    
    return ans;
}
int last_occ(int *arr,int n,int k)
{
     int s = 0, e = n - 1;
     int mid = (s + e)/2;
     int ans = 0;
     while(s <= e)
     {
          if(arr[mid] == k)
          {
              ans = mid;
              s = mid + 1;
          }
          else if(arr[mid] < k)
          {
           
            s = mid + 1;
     
          }
          else
          {
            e = e - 1;
          }

          mid = (s + e)/2;
     }
    
    return ans;
 
     
}



int main()
{
    int arr[] = {1,2,2,2,2,2,3,3};

    // cout<<first_occ(arr,7,1)<<endl;
    // cout<<last_occ(arr,7,1);
    
    int tt_occ = (last_occ(arr,8,3) - first_occ(arr,8,3)) + 1;
    cout<<tt_occ<<endl;
}