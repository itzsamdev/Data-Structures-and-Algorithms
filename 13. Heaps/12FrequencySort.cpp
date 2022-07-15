#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto it : mp)
        {
            // Multiply with *1 to get other elements in order
            pq.push({it.second, -1 * it.first});
        }

        while (!pq.empty())
        {
            int freq = pq.top().first;
            int ele = -1 * pq.top().second;
            for (int i = 1; i <= freq; i++)
            {
                cout << ele << " ";
            }
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}