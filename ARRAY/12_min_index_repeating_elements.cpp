#include<iostream>


using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of element:"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array:"<<endl;
    for(int  i = 0;i < size; i++)
    {
        cin>>arr[i];
    }
   
    int N = 12345;
   cout<<"initialized with -1"<<endl;
   int ind[N];

    for(int i = 0; i < N;i++)
    {
        // cout<<"hello"<<endl;
        ind[i] = -1;
    }
    //  cout<<"hello"<<endl;
     int mini = INT32_MAX;
     for(int i = 0; i < size; i++)
     {
        if(ind[arr[i]] != -1)
        {
            mini = min(mini,ind[arr[i]]);
            cout<<arr[i]<<" at index = "<<mini<<endl;
        }
        else
        {
            ind[arr[i]] = i;
        }
     }

    
     return 0;
}