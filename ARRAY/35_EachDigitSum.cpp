#include<bits/stdc++.h>

using namespace std;
int sum(int n)
{
    if(n>= 0 and n <= 9)
    {
        return n;
    }
    int digit = n % 10;
    int ans = sum(n/10) + digit;
    return ans;

}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}