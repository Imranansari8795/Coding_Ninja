#include<bits/stdc++.h>
using namespace std;
int ans(int p,int q)
{
    // int ans = 1;
    // if(q == 0)
    // {
    //     return 1;
    // }
    
    // return ans(p,q - 1)*p;



    //  meathod 2

    if(q == 0)
    {
        return 1;
    }
    if(q %2 == 0)
    {
        int result = ans(p,q/2);
        return result*result;
    }else{
        int result = ans(p,(q - 1)/2);
        return result*result*p;
    }
    
}

int main()
{
    int p,q;
    cin>>p>>q;
    cout<<ans(p,q);

}