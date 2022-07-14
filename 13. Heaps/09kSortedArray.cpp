#include <bits/stdc++.h>
using namespace std;

// O(n log K)
vector<int> nearlySorted(int arr[], int num, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    vector<int> res;
    for (int i = 0; i <= k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k + 1; i < num; i++)
    {
        res.push_back(pq.top());
        pq.pop();
        pq.push(arr[i]);
    }
    while (!pq.empty())
    {
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}