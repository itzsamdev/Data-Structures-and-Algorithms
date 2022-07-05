#include <bits/stdc++.h>
using namespace std;

// 2 Pointer Sliding Window Approach
void housing(int arr[], int n, int k)
{
    int i = 0;
    int j = 0;
    int currSum = 0;
    while (j < n)
    {
        // Adding sum of current element into window
        currSum += arr[j];
        j++;

        // In case Current sum is more than k
        while (currSum > k && i < j)
        {
            currSum = currSum - arr[i];
            i++;
        }
        // If we get required sum
        if (currSum == k)
        {
            // Print the index of window (j-1) because j++ after adding Currsum
            cout << i << " " << j - 1 << endl;
        }
    }
}
int main()
{
    int plots[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1};
    int n = sizeof(plots) / sizeof(int);
    int k = 8;
    housing(plots, n, k);
    return 0;
}