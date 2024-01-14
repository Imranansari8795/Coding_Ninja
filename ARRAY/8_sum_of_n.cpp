#include<iostream>

using namespace std;

int sum(int n)
{
    if(n == 0)             // base case
        return 0;

    int sum1 = sum(n - 1);
    return n + sum1;
}
int main()
    {
        int number;
        cout<<"number"<<endl;
        cin>>number;

        cout<<"sum = "<<sum(number)<<endl;
    }
