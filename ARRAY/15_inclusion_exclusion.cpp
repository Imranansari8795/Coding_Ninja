#include<iostream>

using namespace std;


int ec_ex_pri(int a,int b,int n)
{
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return (c1 + c2 - c3);
}
int main()
{
    int x,y,n;
    // cout<<"total division = "<<ec_ex_pri(5,7,40)<<endl;
    cout<<"total division = "<<ec_ex_pri(5,7,100)<<endl;
    
}