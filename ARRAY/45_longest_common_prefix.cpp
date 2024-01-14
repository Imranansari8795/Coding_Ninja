#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


string commonLongestPrefix(vector<string> &str){

    sort(str.begin(),str.end());
    string ans = "";
    string str1 = str[0];
    string str2 = str[str.size() - 1];

    int i = 0,j = 0;

    while(i < str1.size() && j < str2.size())
    {
        if(str1[i] == str2[j])
        {
            ans += str1[i];
            i++,j++;
        }else{
            break;
        }
    }
    return ans;
}
int main()
{
    // int n;
    // cout<<"Enter size of string:"<<endl;
    // cin>>n;
    // vector<string>str(n);
    // cout<<"Enter string:"<<endl;

    // for(int i = 0; i < n; i++)
    // {
    //     cin>>str[i];
    // }
    // string ans = commonLongestPrefix(str);
    // cout<<ans<<endl;

    // string str;
    // cin>>str;
    // cout<<str<<endl;
    // int n = stoi(str);
    // cout<<n*10<<endl;

    int n;
    cin>>n;
    int mask = 0;
    int comp = n;
    
    if(n == 0)
    {
        cout<<1<<endl;
        exit(0);
    }
    while(comp != 0)
    {
        mask = mask<<1 | 1;
        comp =  comp>>1;
    }
    int ans = mask&(~n);
    cout<<ans<<endl;
}