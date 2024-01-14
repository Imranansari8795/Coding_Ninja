#include<iostream>

using namespace std;


int first_occ(int arr[],int n,int i, int key)
{
    if(i == n)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return first_occ(arr,n,i + 1,3);
}
int last_occ(int arr[],int n,int i,int key)
{
    if(i == n)
    {
        return -1;
    }
    int restArray = last_occ(arr,n,i+1,key);
    if(restArray != -1)
    {
        
        return restArray;
    }
    if(arr[i] == key)
    {
        // cout<<"hello2"<<endl;
        return i;
    }
    return -1;
}
int main()
{
    int arr[8] = {1,2,3,7,2,4,9,3};
    cout<<first_occ(arr,8,0,3)<<endl;
    cout<<last_occ(arr,8,0,3);

}