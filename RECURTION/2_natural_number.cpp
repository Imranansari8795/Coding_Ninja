#include<iostream>
using namespace std;

int print(int n){
    //write your code here
    
    
    if(n >= 1)
    {
     print(n - 1);
     cout<<n<<" ";
    }
    

}
int main()
{
    int n;
    cin>>n;
    print(n);
}

