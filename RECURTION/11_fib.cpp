#include<iostream>

using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    int first = fib(n -1);
    int last = fib(n - 2);
    return first + last;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}