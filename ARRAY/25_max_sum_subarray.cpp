// #include<bits/stdc++.h>


// using namespace std;



// // int maxSum(int *arr,int n)
// // {
// //     int max_sum = INT_MIN;
// //     for(int i = 0; i < n; i++)
// //     {

// //         for(int j = i; j < n; j++)
// //         {
// //             int currSum = 0;
// //             for(int k = i;k <= j; k++)
// //             {

// //                  currSum += arr[k];
// //             }
// //                  cout<<currSum<<" ";
                
// //                 if(max_sum < currSum)
// //                 {
// //                     max_sum = currSum;
// //                 }
// //         }
// //         cout<<endl;
               
// //     }
// //     return max_sum;
// // }

// int Better_kadanes_max_subarray(int *arr,int n)
// {
//     int curr = 0;
//     int max_sum = INT_MIN;
//     int count = 0;
//     for(int i = 0; i < n ; i++)
//     {
//         if(arr[i] < 0)
//         {
//             count++;
//         }
//     }
//     if(count == n)
//     {

//     int maxi = INT_MIN;
//     for(int i = 0; i < n; i++)
//     {
//             curr = arr[i];
//             maxi = max(curr,maxi);

//     }
    
//     return maxi;
// //
//     }
//     else{
//     for(int i = 0; i < n; i++)
//     {
//         curr += arr[i];
//         if(curr < 0)
//         {
//             curr = 0;
//         }
//         if(max_sum < curr)
//         {
//             max_sum = curr;
//         }
//     }
//      return max_sum;
//     }
    
    
// }
// int main()
// {
//     cout<<"ENter the value of n"<<endl;
// int n;
// cin>>n;

// cout<<"Enter the value of array"<<endl;

// int arr[n],arr1[n];
// for(int i = 0; i < n; i++)
// {
//     cin>>arr[i];

// }
// // cout<<"Max sum = "<<maxSum(arr,n)<<endl;
// cout<<"max sum = "<<Better_kadanes_max_subarray(arr,n);
// }



















