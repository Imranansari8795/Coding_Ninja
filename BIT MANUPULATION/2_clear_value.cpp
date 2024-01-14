#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int mask = 1;
    int index;
    cin>>index;
    mask = mask << index;
    int ans = num ^ mask;

    cout<<ans<<endl;
}