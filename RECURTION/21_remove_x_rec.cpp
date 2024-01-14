// Change in the given string itself. So no need to return or print anything
#include<string.h>
#include<iostream>

using namespace std;

void print(char ch[])
{
   int l = strlen(ch);
   for(int i = 0; i < l; i++)
   {
        cout<<ch[i];
   }
}
void helper(char ch[],int size,int a)
{
    if(ch[a] == '\0')
    {
        return;
    }
    if(ch[a] == 'x')
    {
        for(int i = a; i < size; i++)
        {
            ch[i] = ch[i + 1];
        }
        size = size - 1;
    }
    else
    {
        a++;
       
    }
     helper(ch,size,a);
}
void removeX(char input[]) {
    // Write your code here
    
    int size = strlen(input);
    int a = 0;
    helper(input,size,0);
    print(input);
}

int main()
{
    char ch[] = {'x','a','b','x','\0'};
    removeX(ch);
}

