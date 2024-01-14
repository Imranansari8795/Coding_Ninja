#include <iostream>
using namespace std;
int binary_search(int *arr, int st, int end, int k)
{

    int s = st, e = end;
    int mid = (s + e) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            return mid;
        }

        if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int pevot(int *arr, int n)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (e + s) / 2;
    }
    return s;
}

int search(int *arr, int n, int k)
{
    int p = pevot(arr, 5);
    // cout << p << endl;
    int s = 0;
    if (k >= arr[p] && k <= arr[n - 1])
    {
        return binary_search(arr, p, (n - 1), k);
    }
    else
    {
        return binary_search(arr, 0, (p - 1), k);
    }
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    cout << search(arr, 5, 9);
}