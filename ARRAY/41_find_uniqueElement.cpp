#include<bits/stdc++.h>


using namespace std;
int unique(int arr[],int n)
{
    for(int i =  0;i < n - 1; i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(arr[i] == arr[j])
            {
                arr[i] = arr[j] = INT_MIN;
            }
        }
    }
    int val = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > INT_MIN)
        {
            val = arr[i];
        }

    }
return val;

}
int main()
{
    int n;
    cin>>n;
      int arr[n];

      for(int i = 0;i < n;i++)
      {
        cin>>arr[i];
      }

      cout<<unique(arr,n);
}