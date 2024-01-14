#include<iostream>

using namespace std;

void repalce(string s)
{
    if(s.length() == 0)
    {
        return;
    }

    if(s[0] == 'p' && s[1] == 'i')
    {
        cout<<"3.14";
        string rest = s.substr(2);
        repalce(rest);
    }
    else
    {
        cout<<s[0];
        repalce(s.substr(1));
    }
}
int main()
{
    string st = "pippppipppppppip";
    string s1 = "ipippppipppppppipi";
    repalce(st);
    cout<<endl;
    repalce(s1);


}