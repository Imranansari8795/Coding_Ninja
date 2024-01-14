#include<bits/stdc++.h>

using namespace std;

void COuntSort(int *arr,int n)
{
    // cout<<"Heloo"<<endl;
    int largest = INT_MIN;
    for(int i = 0 ; i < n; i++)
    {
        largest = max(arr[i],largest);

       
    }
    int m = largest + 1;
    int freq[m];
    for(int i = 0; i < m; i++)
    {
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        // cout<<"hello"<<endl;
    }

    // sorting
    int j = 0;
    for(int i = 0; i < m; i++){

        while(freq[i] > 0)
        {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
    
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    COuntSort(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}