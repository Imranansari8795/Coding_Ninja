#include<iostream>
#include<string.h>
using namespace std;
void print(char ch[])
{
    for(int i = 0; i < strlen(ch); i++)
    {
        cout<<ch[i]<<" ";
    }
    cout<<endl;
}
void replace(char ch[],char c1,char c2)
{
    // cout<<"before"<<endl;
    //  print(ch);
    if(ch[0] == '\0')
    {
        return;
    }
    
    if(ch[0] == c1)
    {
        ch[0] = c2;
     replace(ch + 1,c1, c2);
    }
    else
    {
    	 replace(ch + 1,c1, c2);
    }
   
   print(ch);

    // cout<<"after"<<endl;
    // // for(int i = 0; i < strlen(ch); i++)
    // // {
    // //     cout<<ch[i]<<" ";
    // // }
    // print(ch);
   
}


void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    
//     if(input[i] == '\0')
//     {
//         return;
//     }
    
//     if(arrr[i] == c1)
//     {
//         arr[i] = c2;
//     }
    // int i = 0;
    replace(input,c1,c2);
}

int main()
{
    char ch[] = {'a','c','r','a','m','m','\0'};
    replaceCharacter(ch,'a','l');
    replaceCharacter(ch,'m','o');
}