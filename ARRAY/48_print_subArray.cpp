#include<iostream>
using namespace std;

void printSubArray(int *arr,int n)
{

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++){

            for(int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
                
            }
            cout<<" "<<endl;
        }
    }
}

void nForest(int n) {
	// Write your code here.
	for(int i = 0;  i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{

    int arr[] = {2,3,56,7,8};
    // printSubArray(arr,5);
    nForest(2);

}