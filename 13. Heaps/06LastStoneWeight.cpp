#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> pq;
    for (auto x : stones)
    {
        pq.push(x);
    }
    int left = 0;
    while (pq.size() > 1)
    {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        left = first - second;
        if (left > 0)
        {
            pq.push(left);
        }
    }
    if (pq.empty())
    {
        return 0;
    }
    return pq.top();
}