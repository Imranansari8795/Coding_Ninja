#include<iostream>

using namespace std;


void sbstr(string s,string empty_str)
{
    if(s.length() == 0)
    {
        cout<<empty_str<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    sbstr(ros,empty_str);
    sbstr(ros,empty_str + ch);
}
int main()
{
    string s = "ABC";

    sbstr(s,"");
}