#include<iostream>

using namespace std;
char stateCheck(char ch,int n)
{
    if(ch == 'H')
    {
        if(n % 2 == 0)
        {
            return 'H';
        }else{
            return 'T';
        }
    }
    if(ch == 'T')
    {
        if(n % 2 == 0)
        {
            return 'T';
        }else{
            return 'H';
        }
    }
}
int main(){
    char ch;
    int n;
    cout<<"Enter char : "<<endl;
    cin>>ch;
    cout<<"Enter N : "<<endl;
    cin>>n;
    cout<<stateCheck(ch,n);
}