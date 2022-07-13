#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = nums.size();
    k = n - k;

    for (auto x : nums)
    {
        pq.push(x);
    }
    while (k)
    {
        pq.pop();
        k--;
    }
    return pq.top();
}