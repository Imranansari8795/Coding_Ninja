#include<iostream>
#include<algorithm>
using namespace std;
// int fun(int &k)
// {
//     cout<<k<<endl;
//     k = k - 1;
//     return  k;
// }
// int countZeros(int n)
// {
//     int p;
//     if(n == 0)
//     {
//         return 1;
//     }

//      if(n%10 == 0)
//      {
//          p = (1 + countZeros(n/10));
//      }
//      else{
//         return countZeros(n/10);
//      }

//     //  if(p > 1)
//     //  {
//     //     return (p - 1);

//     //  }
    
// }

int main()
{
    // int n;
    // cin>>n;
//     int n = 1000;
//     cout<<countZeros(n);


string abc = "abcd";

reverse(abc.begin(),abc.end());
cout<<"abc->"<<abc<<endl;
}