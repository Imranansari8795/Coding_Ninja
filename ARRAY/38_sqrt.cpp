#include<bits/stdc++.h>

using namespace std;

float sqr(int n)
{
    int i = 1, j = n;
   float mid = i + (j - i)/2.0;
    float ans =  -1;

      while(i < j)
      {
        // if(mid*mid == n)
        // {
        //     return mid;
        // }

         if(mid*mid <= n)
          {
                ans = mid;
                i = mid + 1;
          }else{
            ans = mid;
            j = mid - 1.0;
          }
          mid = i + (j - i)/2.0;
      }
      return ans;
    
}
int main()
{
    int n;
    cin>>n;

    cout<<(sqr(n));
}