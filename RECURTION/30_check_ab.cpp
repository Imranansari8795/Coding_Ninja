

#include<iostream>
using namespace std;


bool checkAB(char input[]) {
	// Write your code here
    
    if(input[0] == '\0')
    {
        return true;
    }
    
    if(input[0] == 'a')
    {
        return checkAB(input + 1);
    }
    if(input[0] == 'a' && input[1] == 'b' && input[2] == 'b' && (input[3] == 'a' || input[3] == '\0'))
    {
        return true;
    }


    else if(input[0] == 'b' && input[1] == 'a')
    {
        return false;
    }
    else if(input[0] == 'b' && input[1] == 'b' && (input[2] == 'a' || input[2] == '\0'))
    {
        return checkAB(input + 2);
    }
    else
    {
        return false;
    }

}

int main()
{
    char ch[] = {'b','b','a','\0'};
    cout<<checkAB(ch);
}
