#include<iostream>
using namespace std;


void sum_of_sumArray(int *arr,int size)
{ 
    int curr_sum = 0;
    for(int i = 0; i < size; i++)
    {
        curr_sum = 0;
        for(int j = i; j < size; j++)
        {
            curr_sum = curr_sum + arr[j];
            cout<<curr_sum<<endl;
        }
    }
}
int main()
{
    int arr[5] = {1,2,0,7,2};

    sum_of_sumArray(arr,5);

}