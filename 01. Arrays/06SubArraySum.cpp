#include <bits/stdc++.h>
using namespace std;

// Brute Force O(N^3)
int LargestSubArray(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = 0;
            for (int k = i; k <= j; k++)
            {
                temp += arr[k];
            }
            largest = max(largest, temp);
        }
    }
    return largest;
}
// Prefix Sum O(N^2)
int LargestSubArray2(int arr[], int n)
{
    int prefix[n + 1] = {0};
    prefix[0] = arr[0];
    // Storing sum of all elements till that index
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largest = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Case to avoid prefix[0-1]
            int temp = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largest = max(largest, temp);
        }
    }
    return largest;
}
// Kadane Algorithm O(N)
int KadaneAlgorithm(int arr[], int n)
{
    int largest = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        largest = max(largest, curr_sum);
    }
    return largest;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << LargestSubArray(arr, n) << endl;
    cout << LargestSubArray2(arr, n) << endl;
    cout << KadaneAlgorithm(arr, n) << endl;

    return 0;
}