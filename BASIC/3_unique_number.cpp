#include<iostream>
using namespace std;
int unique(int *arr,int n)
{
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
       ans = ans^arr[i];
    }
    return ans;

}
int main()
{
    int arr[9] = {3,7,2,2,7,3,4,8,4};

    cout<<unique(arr,9);
    
    
}