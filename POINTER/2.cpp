//  #include<iostream>
//  using namespace std;
//  #include<stdio.h>
// void func(int p){
//     cout << p << " ";
// }
//  int f(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }
//  int main()
//  {

//  char ch = 'a';
//  char* ptr = &ch;
//  ch++;
//  cout << *ptr << endl;

// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];


// int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;




// #include <iostream>
// using namespace std;
// int main()
// {
//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;
//   return 0;
// // }



// #include<iostream>
// using namespace std;
// int main() {
//   char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st];
//   }
//   return 0;
// }





// int f(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// int main() {
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout << f(c, b, a);
    // char * ch;
    // cout<<"\n"<<sizeof(ch)<<endl;
    // int * ptr;
    // cout<<sizeof(ptr)<<endl;
    // double * p;
    // cout<<sizeof(p)<<endl;
   


//    #include <iostream>
// using namespace std;


// int main(){
    // int i = 10;
    // int &p = i;
    // func(p++);
    // cout << i;





//     #include <iostream>
// using namespace std;

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }
// }
// }
//  }



// #include <iostream>
// using namespace std;

// #define SQUARE(x) x*x

// int main(){
//     int x = 36 / SQUARE(6);
//     cout << x;

//     return 0;



// }


#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int * const q = &p;
    (*q)++;
    p++;
}
