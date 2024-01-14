#include<bits/stdc++.h>


#include<string>

using namespace std;


bool passing(string str)
{
    int size = str.length();

    int i = 0; int j = size - 1;

    while(i <= j)
    {
        if(str[i++] != str[j--])
        {
            return false;
        }
    }
    return true;
}

using namespace std;

int main()
{
    string str;
    cout<<"Enter string:"<<endl;
    cin>>str;

     if(passing(str))
     {
        cout<<"pelindrome"<<endl;
     }else{
        cout<<"Not possible"<<endl;
     }
}