#include<bits/stdc++.h>
#include<set>

using namespace std;

int secondlargest(int *arr,int n)      // it will work only for unique array elements, we can for duplicate elements
{
    int val = INT_MIN;
    int index = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > val)
        {
            val = arr[i];
            index = i;

        }
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == val)
        {
            arr[i] = INT_MIN;
        }
    }
    cout<<"Index :" << val<<" At "<<index<<endl;

    // arr[index] = INT_MIN;
    val = INT_MIN;
    index = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > val)
        {
            val = arr[i];
            index = i;
        }
    }
    cout<<"second max :"<<val<<" at "<<index<<endl;
    return arr[index];

}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    set<int>s;


    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // for(int i = 0; i < n; i++)
    // {
    //     s.insert(arr[i]);
    // }
    cout<<secondlargest(arr,n);
    // int size = s.size();
    // cout<<s<<endl;




// method 2 --->





    // auto it = s.begin();
    // for(int i = 0 ; i < size - 2; i++)
    // {
    //     it++;
    // }
    // cout<<"second Max : "<<*it<<endl;


    // meathod 3 ---->>

    // auto it = next(s.begin(),size - 2);
    // cout<<*it<<endl;


}