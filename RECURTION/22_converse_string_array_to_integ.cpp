#include<string.h>
#include<iostream>

using namespace std;


int length(char input[]){
	int len = 0;
	for(int i =0;input[i] != '\0';i++){
		len++;
	}
	return len;
}


int stringToNum(char input[], int last){
	//Base Case
	if(last == 0){
		return input[last] - '0';
	}
	//Recursive Call
	int smallAns = stringToNum(input,last-1);       
	int a = input[last] - '0';
	return smallAns * 10 + a;
}


int stringToNumber(char input[]) {
   
    
    
  int last  = length(input);
    return stringToNum(input,last - 1);
}

int main()
{
    char ch[] = {'1','2','3','1','\0'};
	cout<<stringToNumber(ch);
}