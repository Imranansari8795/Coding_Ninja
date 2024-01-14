#include<bits/stdc++.h>


using namespace std;

void sortZeroAtlast(int *arr,int n)
{
    int flag = false;
    int i;
    for(i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            if(arr[j] == 0 and arr[j + 1] != 0)
            {
                swap(arr[j],arr[j + 1]);
                flag = true;
            }
            
        }
        if(!flag)
        {
            break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sortZeroAtlast(arr,n);

    // cout<<~0<<" and "<<~1<<endl;
    
}