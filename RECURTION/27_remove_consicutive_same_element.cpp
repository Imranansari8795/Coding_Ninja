

#include<iostream>
using namespace std;



void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
  	*/

    
    if( input [0] == '\0')
    {
        return;
    }
    if(input[0] != input[1])
    {
        cout<<input[0]<<" ";
        removeConsecutiveDuplicates(input +  1);
    }
    else
    {
        int i = 1;
        for(i; input[i] != '\0'; i++)
        {
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
        removeConsecutiveDuplicates(input);
        
    }


}


int main()
{
    char ch[] = {'b','c','c','c','c','g','g','g','r','r','\0'};

    removeConsecutiveDuplicates(ch);
   
}