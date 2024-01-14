#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void reversing(string str)
{
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}

string sorting(string str)
{
    vector<int>freq(26,0);
    for(int i = 0; i < str.size(); i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }
    
        int j = 0;
    for(int i = 0; i < 26; i++)
    {
        while(freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
    // cout<<str<<endl;

    return str;



}
int main()
{
    // string str = "adbcaai";
    // char ch = 'e';
    // str.push_back(ch);
    // cout<<str.substr(2)<<endl;
    // reversing(str);

    // string s = "abc";
    // string s1 = "pqr";
    // // cout<<s + s1<<endl;

    // s.append(s1);
    // cout<<s<<endl;

    // string str = "ppfgabcaa";

    string str;
    cin>>str;
    cout<<sorting(str)<<endl;
    

}