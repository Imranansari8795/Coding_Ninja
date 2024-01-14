#include<iostream>
#include<string.h>
using namespace std;
int length(char *arr){
	int len = 0;
	for(int i =0;arr[i]!='\0';i++){
		len++;
	}
	return len;
}

//Recursive Function
void replStar(char *arr,int start){
	//Base Case: Reached End Of String
	if(arr[start]=='\0'){
		return;
	}   
	//Recursive Call 
	replStar(arr,start+1);
	if(arr[start] == arr[start+1]){
		int l = length(arr);
		//Extending the string
		arr[l+1] = '\0';
		int i;
		//To shift the letters by 1
		for(i = l-1;i>=start +1;i--){
			arr[i+1] = arr [i];
		}
		//Entering * in between
		arr[start+1] = '*';
	}

	
}
void pairStar(char *input) {
    // Write your code here
    replStar(input,0);
}
int main()
{
    char ch[] = {'a','a','d','\0'};
    pairStar(ch);

	// for(int i = 0; i != '\0';i++)
	// {
	// 	cout<<ch[i];
	// }
}