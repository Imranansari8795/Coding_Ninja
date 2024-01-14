// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,0,1,2,2,5};
    set<int>s;
 int n = sizeof(arr)/sizeof arr[0];
 cout<<n<<endl;
    for(int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
        
    }
    for(auto& a: s)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    cout<<*(--s.end())<<endl;
    cout<<* --(--(s.end()))<<endl;
}

