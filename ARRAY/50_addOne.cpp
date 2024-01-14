#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
#include<vector>

int main()
{
    vector<int>v;
    int arr[] = {9,9,9};
    string str;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        str += to_string(arr[i]);
    }
    int num = stoi(str);
    num = num + 1;

    string s = to_string(num);

    for(int i = 0; i < s.length(); i++)
    {
        int val = s[i] - '0';
        v.push_back(val);
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }


    



}