#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maxheap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "Element at top: " << pq.top() << endl;
    pq.pop();
    cout << "Element at top: " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;

    // Minheap
    int arr[] = {6, 2, 9, 1, 4, 3, 7};
    priority_queue<int, vector<int>, greater<int>> minheap;

    for (auto x : arr)
    {
        minheap.push(x);
    }
    while (!minheap.empty())
    {
        cout << minheap.top() << " ";
        minheap.pop();
    }
    return 0;
}