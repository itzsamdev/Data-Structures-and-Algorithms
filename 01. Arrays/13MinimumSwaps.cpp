#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> arr)
{
    int n = arr.size();

    // Storing indexes of elements with values
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({arr[i], i});
    }

    // Sorting pair
    sort(v.begin(), v.end());

    int swaps = 0;
    // Comparing original array with sorted till all indexes match
    for (int i = 0; i < n; i++)
    {
        if (i != v[i].second)
        {
            swaps++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return swaps;
}