#include<iostream>
using namespace std;




int maxi(int *arr,int size)
{
    int maxi = INT32_MIN;

    for(int i = 0; i < size; i++)
    {
        if(maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int mini(int *arr,int size)
{
    int mini = INT32_MAX;

    for(int i = 0; i < size; i++)
    {
        if(mini > arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}
int main()
{


int arr[] = {-2,3,4,5,7,4,7,-8};

cout<<maxi(arr,8) + abs(mini(arr,8));


}