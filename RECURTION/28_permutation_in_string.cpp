

#include<iostream>

#include<string.h>

using namespace std;

void permutation(string s1, string ans)
{
  if(s1.length() == 0)
  {
    cout<<ans<<endl;
    return;
  }
   
  for(int i = 0; i < s1.length(); i++)
  {
    char ch = s1[i];
    string rest = s1.substr(0,i) + s1.substr(i + 1);

    permutation(rest,ans + ch);
  }

}
int main()
{
  string s1 = "ABC";
  permutation(s1,"");
}