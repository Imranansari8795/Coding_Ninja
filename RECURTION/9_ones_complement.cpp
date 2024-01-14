#include<iostream>
using namespace std;
int one_compl(int n)
{
    int mask = 0;
    int m = n;
    if(m == 0)
    {
        return 1;
    }
   while(n != 0)
   {
    mask = (mask<<1) | 1;
    n = n>>1;

   }
//    cout<<n<<endl;
 return ((~m) & mask);

}
int main()
{
   
   int n;
   cin>>n;
    cout<<one_compl(n);


}