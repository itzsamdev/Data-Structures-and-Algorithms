#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(int arr[], int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        res.push_back(s.top());
        s.push(curr);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, 5, 1, 7, 0, 1};
    int n = sizeof(arr) / sizeof(int);
    nextSmaller(arr, n);

    return 0;
}