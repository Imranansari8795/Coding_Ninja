#include<iostream>

using namespace std;


void revInc(int i,int n)
{

    if(i > n)
    {
        return;
    }
    cout<<i<<" ";
    revInc(i + 1,n);
}

void revDec(int i, int n)
{
    if(i > n)
    {
        return;
    }
    revDec(i + 1,n);
    cout<<i<<" ";
}
int main()
{
    revInc(1,4);
    cout<<endl;
    revDec(1,4);
}