#include <bits/stdc++.h>
using namespace std;

bool outOrder(int arr[], int i, int n)
{
    if (i == 0)
    {
        return arr[i] > arr[1];
    }
    if (i == n - 1)
    {
        return arr[i] < arr[i - 1];
    }
    return arr[i] > arr[i + 1] or arr[i] < arr[i - 1];
}
// Find the first and last index of unsorted subarray after sorting it whole array will become sorted
vector<int> printUnsorted(int arr[], int n)
{
    if (n == 1)
    {
        return {0, 0};
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    vector<int> ans;
    // Stroing smallest and largest unsorted array elements
    for (int i = 0; i < n; i++)
    {
        if (outOrder(arr, i, n))
        {
            smallest = min(smallest, arr[i]);
            largest = max(largest, arr[i]);
        }
    }
    if (smallest == INT_MAX)
    {
        return {-1, -1};
    }
    int left = 0;
    while (smallest >= arr[left])
    {
        left++;
    }
    int right = n - 1;
    while (largest <= arr[right])
    {
        right--;
    }
    return {left, right};
}