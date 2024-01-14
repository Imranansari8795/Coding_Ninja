#include<iostream>

using namespace std;

void towerOfHenoi(int n,char source,char helper,char destination)
{
    if(n == 0)
    {
        return;
    }
    towerOfHenoi(n - 1,source,destination,helper);
    cout<<"move "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHenoi(n - 1,helper,source,destination);
}



int main()
{
    // int n = 3;
    int n;
    cin>>n;
    towerOfHenoi(n,'A','B','C');
}