#include<iostream>

using namespace std;

int power(int x,int p)
{
    if(p == 0)              // base case
        return 1;
    
   int power1 = power(x,p - 1);
   return x*power1;    
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}