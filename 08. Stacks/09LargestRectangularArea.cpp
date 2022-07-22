#include <bits/stdc++.h>
using namespace std;

// Time Complexity - O(N)
vector<long long> PreviousSmallest(long long arr[], int n)
{
    vector<long long> left(n);
    stack<long long> s;

    for (int i = 0; i < n; i++)
    {

        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            left[i] = 0;
        }
        else
        {
            left[i] = s.top() + 1;
        }
        s.push(i);
    }
    return left;
}
vector<long long> NextSmallest(long long arr[], int n)
{
    vector<long long> right(n);
    stack<long long> s;

    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            right[i] = n - 1;
        }
        else
        {
            right[i] = s.top() - 1;
        }
        s.push(i);
    }
    return right;
}
long long getMaxArea(long long arr[], int n)
{
    vector<long long> left = PreviousSmallest(arr, n);
    vector<long long> right = NextSmallest(arr, n);

    long long maxi = 0;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, (right[i] - left[i] + 1) * arr[i]);
    }

    return maxi;
}