#include "bits/stdc++.h"
using namespace std;

 vector<int> sorting(vector<int> &a)
 {
    vector<int> k;
    sort(a.begin() , a.end());
   
   for(auto x : a)
   {
    k.push_back(x);
   }
   return k;
 }
int main()
{
    vector<int>p = {6,5,9,9,4,4};
    // vector<int>s;
    // sort(arr,arr + 6);


     p = sorting(p);
     
    for(auto x : p)
    {
        cout<<x<<" ";
 
    }
}