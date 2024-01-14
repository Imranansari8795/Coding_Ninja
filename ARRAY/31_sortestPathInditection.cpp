#include<bits/stdc++.h>
#include<math.h>
#include<string>

using namespace std;

float passDirection(string str)
{
    int x = 0,y = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'E')
        {
            y += 1;
        }else if(str[i] == 'W')
        {
            y -= 1;
        }else if(str[i] == 'N')
        {
            x -= 1;
        }else{
            x += 1;
        }
        
    }
    float  ans = sqrt(x*x + y*y);
    return ans;
}
int main()
{
    // string str;
    // cout<<"Enter string:"<<endl;

    // cin>>str;

//    float ans = passDirection(str);
//    cout<<"sortest displacament : "<<ans;


string sre = "abc";
string sre1 = "abc";
string *sre2 = new string("abc");
if(sre == sre1)
{
    cout<<"equals"<<endl;
}else{
    cout<<"not equals"<<endl;
}
if(sre == *sre2)
{
    cout<<"equals"<<endl;
}else{
    cout<<"not equals"<<endl;
}
}