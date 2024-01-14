#include<iostream>
#include<string>
using namespace std;

#include<vector>
string coutSorts(string str)
{
    vector<int>freq(26,0);

    for(int i = 0; i < str.size();i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }

    int j = 0;
    // int length = ;
    for(int i = 0; i < freq.size(); i++)
    {
        while(freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
return str;
}


bool checAnagram(string str1,string str2)
{
    if(str1.size() != str2.size())
    {
        return false;
    }

    vector<int>check(26,0);

    for(int i = 0; i < str1.size();i++)
    {
        // int index = str1[i] - 'a';
        check[str1[i] - 'a']++;
        check[str2[i] - 'a']--;
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(check[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // int num;
    // cin>>num;

    // string str = to_string(num);

    // cout<<str[0];

    string str,str2;
    cin>>str>>str2;
    
    // string str1 = coutSorts(str);
    // string str3 = coutSorts(str2);

    // cout<<str1<<endl;
// cout<<str1<<" "<<str3;
    // if(str1 == str3)
    // {
    //     cout<<"yes"<<endl;
    // }else cout<<"No"<<endl;


    // cout<<str1<<endl;

if(checAnagram(str,str2))
{
    cout<<"Yes"<<endl;
}else cout<<"No"<<endl;


}