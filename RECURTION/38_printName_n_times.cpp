#include<iostream>

using namespace std;

void func(int i, int n){

    if(i > n){
        return;
    }
    cout<<"Imran ";
    func(i + 1,n);
}
int main()
{
    int n;
    cin>>n;
    func(1,n);
}