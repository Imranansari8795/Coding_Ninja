// #include<iostream>

// using namespace std;

// int Power(int n,int x)
// {
//     if(n  == 0)
//     {
//         return 1;
//     }

//     int ans = x*Power(n - 1,x);
//     return ans;
// }



// int main()
// {
//     int n,x;
//     cin>>n>>x;

//     cout<<Power(n,x);
//     cout<<ans<<endl;


// }





#include <bits/stdc++.h> 

bool findRedundantBrackets(string &s){

    stack<char>st;

    for(int i=0;i<s.length();i++){

        char c=s[i];

        if(c=='(' ||c=='+' || c=='-' || c=='*' ||c=='/'){

            st.push(c);

        }

        else if(c==')'){

            if(st.top()=='('){

                return true;

            }

            else{

                while(st.top()!='('){

                    st.pop();

                }

                st.pop();

            }

        }

    }

    return false;

}

 int main()
 {
    
 }