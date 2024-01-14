#include "bits/stdc++.h"

using namespace std;
string moveAllX(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveAllX(s.substr(1));
    if(ch == 'x')
    {
        return (ans + ch);
    }
    else
    {
        return (ch + ans);
    }
}
int main()
{
    string  str1 = "prxxtxaxloxpx";
    string  str2 = "xprxxtxaxloxpx";
    cout<<moveAllX(str1)<<endl;
    cout<<moveAllX(str2);
}