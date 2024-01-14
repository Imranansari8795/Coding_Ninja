#include<iostream>
#include<vector>
using namespace std;
int allIndex(int arr[], int size, int key,int *output){

    if(size == 0){
        return 0;
    }

    int ans = allIndex(arr,size - 1, key, output);
   
    if(arr[size - 1] == key){
        output[ans] = size - 1;
        ans++;
    }

    
    return ans;
    
}
int main(){
    int array[6] = {23,30,19,63,30,30};
    int key = 30;
    int output[20];
    
    int result = allIndex(array,6,key,output);
    cout<<result<<endl;

    for(int i = 0; i < result; i++)
    {
        cout<<output[i]<<" ";
    }
   
    
   
}