#include<iostream>

using namespace std;

int gcd(int x,int y)
{
    int rem = 0;
    
    while(y != 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}