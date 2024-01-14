#include<iostream>
using namespace std;
void print(char arr[],int n)
{
   for(int i = 0; i < n;i++)
  {
    cout<<arr[i];
  }

}
void fun(char arr[],int n)
{
  int p =n - 1;
  int s = 0, e = p; 
//   string a;
//   for(int i = 0; i < p;i++)
//   {
       while(s<e)
       {
         swap(arr[s],arr[e]);
        s ++ ;
        e -- ;
       }
//   }
  
  print(arr,n);
}
int main()
{
    int n;
    cin>>n;
    char ch[n];
    for(int  i = 0 ;  i < n;i++)
    {
        cin>>ch[i];
    }
    fun(ch,n);



    // cout<<"size"<<endl;
    // int t;
    // cin>>t;
    // //  cin>>t;
    // while(t)
    // {
    //     // cout<<t<<" ";
    //     string s;
    //     cin>>s;

    //     int n = s.length();
         
    //     //  cout<<n<<endl;

    //     int start = 0, end = n - 1;

    //     while(start<end)
    //     {
    //         swap(s[start],s[end]);
    //         start ++;
    //         end --;
    //     } 

    //     cout<<s<<endl;


    // }



    
}