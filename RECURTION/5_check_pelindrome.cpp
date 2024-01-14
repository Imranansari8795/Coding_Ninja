#include<iostream>
#include<string.h>
using namespace std;

bool pelindrome(char *arr,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    
    if(arr[i]!=arr[j])
    {
        return false;
    }
    else
    {
       return pelindrome(arr,i + 1,j - 1);
    }
    
}

bool checkPalindrome(char input[]) {
    // Write your code here
     
    
    return  pelindrome(input,0,strlen(input) - 1);
    
}
int main()
{
   
}