#include <bits/stdc++.h>
using namespace std;

vector<int> nearlySorted(int arr[], int num, int K)
{

    int size = (K == num) ? K : K + 1;
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + size);

    int index = 0;
    for (int i = K + 1; i < num; i++)
    {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while (!pq.empty())
    {
        arr[index++] = pq.top();
        pq.pop();
    }
    vector<int> res;
    for (int i = 0; i < num; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
}