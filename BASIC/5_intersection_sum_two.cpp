#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int arr[] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    vector<int> temp;
                    ans.push_back(i);
                    ans.push_back(j);
                    // ans.push_back(temp);
                   
                }
            }
        }
    return ans;
    }
        
};

// void intersection(int *arr1,int *arr2,int m,int n)
// {

// method --- >1

//    for(int i = 0; i < m; i++)
//    {
//     int element = arr1[i];
//        for(int j = 0; j < n; j++)
//        {
//              if(element == arr2[j])
//              {
//                 arr2[j] = -123112;
//                 cout<<element<<" ";
//             //  cout<<arr2[j]<<" ";
//                 break;
//              }

//        }
//    }

//   method --- >> 2

//     int i = 0, j = 0;

//     while(i<m && j<n)
//     {
//         if(arr1[i] == arr2[j])
//         {
//             cout<<arr1[i]<<" ";
//                i ++;
//                j ++;

//         }
//         else if(arr1[i]<arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j ++;
//         }
//     }
// }
int main()
{
    // int arr1[6] = {1,2,2,2,3,4};
    // int arr2[4] = {2,2,3,3};

    // intersection(arr1,arr2,6,3);

    Solution s1;
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    vector<int>p = s1.twoSum(v,6);
    
    for(auto i : p)
    {
         cout<<p[i]<<" ";
    }
}