#include <bits/stdc++.h>
using namespace std;

//  O(n log K)
int findKthLargest(vector<int> &nums, int k)
{
    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    return pq.top();
}