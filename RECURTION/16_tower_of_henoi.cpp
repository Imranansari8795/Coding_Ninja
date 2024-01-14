#include<iostream>

using namespace std;

void towerOfHenoi(int n,char sorc,char des,char helpr)
{
    if(n == 0)
    {
        return;
    }  
    towerOfHenoi(n - 1,sorc,helpr,des);
    cout<<"move from "<<sorc<<" to "<<des<<endl;

    towerOfHenoi(n-1,helpr,des,sorc);
}
int main()
{
   int n;

   cin>>n;
   towerOfHenoi(n,'A','B','C');


}