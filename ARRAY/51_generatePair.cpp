#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> v;
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            pair<int, int> p = {arr[i], arr[j]};
            v.push_back(p);
        }
    }

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<v[i].second<<" ";
    }

    return 0;
}
