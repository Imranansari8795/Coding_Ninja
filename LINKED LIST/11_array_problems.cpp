#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int size;
cin>>size;
int counter=0;
int arr1[size];
int arr2[size];
if(size>=5 && size<=10){
for(int i=0;i<size;i++){
cin>>arr1[i];
}
for(int i=0;i<size;i++){
cin>>arr2[i];
}
for(int i=0;i<size;i++){
if(arr1[i]!=arr2[i]){
counter++;
}
}
for(int i=0;i<size;i++){
cout<<arr1[i]<<" ";
}
cout<<endl;
cout<<counter<<" "<<counter<<endl;
}
else{
cout<<"Invalid Value"<<endl;
}
return 0;
}