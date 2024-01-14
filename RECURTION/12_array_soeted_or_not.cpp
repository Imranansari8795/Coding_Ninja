#include<iostream>

using namespace std;

bool sorted(int *arr, int n)
{
    if(n == 1)
    {
        return true;
    }
    bool check = sorted(arr + 1, n - 1);
    return (arr[0]<arr[1] && check);
}

void dec(int n)
{
    if(n == 1)
    {
        cout<<"1"<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n - 1);

}

void inc(int n)
{
    if(n == 1)
    {
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    cout<<sorted(arr,6)<<endl;
    dec(6);
    cout<<endl;
    inc(6);

}