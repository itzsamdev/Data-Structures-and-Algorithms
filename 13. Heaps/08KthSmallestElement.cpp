#include <bits/stdc++.h>
using namespace std;

// O(n log K)
int kthSmallest(int arr[], int k)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    // Max Heap
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        pq.push(arr[i]);
        pq.pop();
    }
    return pq.top();
}