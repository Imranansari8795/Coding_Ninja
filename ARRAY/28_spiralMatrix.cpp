#include<bits/stdc++.h>


using namespace std;

void print2Darray(int arr[][cols],int rows,int cols)
{
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(int);
    cout<<rows<<" "<<cols<<endl;
}
int main()
{
    int n;
    cout<<"enter rows:"<<endl;
    cin>>n;
    int m;
    cout<<"Enter col:"<<endl;
    cin>>m;

    int arr[n][m];

    cout<<"Enter elements:"<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            cin>>arr[i][j];
        }
    }
print2Darray(*arr,n,m);
}