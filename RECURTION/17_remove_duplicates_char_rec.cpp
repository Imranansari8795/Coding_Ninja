#include<iostream>

using namespace std;


string rem_dup(string s)
{
    if(s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = rem_dup(s.substr(1));
    if(ch == ans[0])
    {
        return ans;
    }
    else
    {
        return ch + ans;
    }
}
int main()
{
    string st = "aabbbbjjjjjjccccnnnniiii";
    // string st1 = "aaaaaaaaaaabbbbbbppbbbbbccccacccdddloddd";
    // cout<<st + st1;

    cout<<rem_dup(st)<<endl;
}