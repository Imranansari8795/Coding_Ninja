#include<iostream>
#include<string.h>
using namespace std;

int palindrome_check(string s, int start, int end)
{
    if(end-start==1 || start==end)
    {
        return 1;
    }
    else
    {
        if(s[start]==s[end])
        {
            return palindrome_check(s,start+1,end-1); 
        }
        else
        {
            return 0;
        }
    }
}

bool checkPalindrome(char input[]) {
    // Write your code here

    bool ans;
    int s = 0;
    int end = strlen(input);
    if(s == end)
    {
        return true;
    }
   if(input[s] != input[end-1])
   {
    return false;
   }
   else{
    end--;
    ans = checkPalindrome(input + 1);

   }
    return ans;
}


int main()
{
   char str[] = {"abba"};
 cout<<checkPalindrome(str);

}
