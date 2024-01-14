#include<bits/stdc++.h>

using namespace std;

int maxProfit(int *arr,int n)
{
    int maxProfit = 0;

    int buyPrice = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(buyPrice < arr[i])
        {
            int profit = arr[i] - buyPrice;
            maxProfit = max(maxProfit,profit);
        }
        else{
            buyPrice = arr[i];
        }
    }
        return maxProfit;
}
int main()
{
    int n;
    cout<<"Enter size "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the element"<<endl;

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

  cout<<"max profit : = "<<maxProfit(arr,n);
}