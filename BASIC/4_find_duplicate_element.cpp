#include<iostream>
using namespace std;
int duplicate(int *arr,int n)
{
    int ans = 0;
    for(int i = 0; i < n;i++)
    {
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < n; i++)
    {
        ans = ans^i;
    }
    return ans;
}


// for(int i = 0; i < n; i++){
//     for(; i < n; i++){
//         cout << i << endl;
//     }
// }
int main()
{
    int arr[5] = {5,3,7,9,3};
    cout<<duplicate(arr,5);

}