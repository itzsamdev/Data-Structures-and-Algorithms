#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = l; i <= r; i++)
    {
        pq.push(arr[i]);
    }

    int a = 1;
    while (a < k)
    {
        pq.pop();
        a++;
    }
    return pq.top();
}