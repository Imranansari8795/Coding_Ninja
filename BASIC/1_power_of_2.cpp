#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
// int power(int n)
// {
//     // method --->>>1


//     // int ans = 0;
//     // for (int i = 0; i <= 30; i++)
//     // {
//     //     int ans = pow(2, i);

//     //     if (ans == n)
//     //     {
//     //         return true;
//     //     }
//     // }
//     //     return false;



//     // method ---- >>> 2;

//      int ans = 1;
//      for(int i = 0; i  < 31;i++)
//      {
//         if(ans > INT32_MAX/10)
//         {
//            ans = ans * 2;

//         }

//         if(ans == n)
//         {    
//             return true;
//         } 
//      }

//      return false;
// }
// int main()
// { 
//     int n;
//     cin>>n;
//     cout<<power(n);
// }














double geometricSum(int k) {
    // Write your code here

    
    
     if (k == 0)
        return 1;
    
    double smalloutput = geometricSum(k - 1);
    cout<<smalloutput<<endl;

    return smalloutput + 1 / (pow(2, k));
    
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}


