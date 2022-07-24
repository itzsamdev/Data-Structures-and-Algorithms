#include <bits/stdc++.h>
using namespace std;

void findShortestPath(int src, int v, vector<int> adj[])
{
    vector<int> dist(v, INT_MAX);
    queue<int> q;

    dist[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            // If current distance is smaller than MAX
            if (dist[node] + 1 < dist[it])
            {
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    // Printing Distance
    for (int i = 0; i < v; i++)
    {
        cout << dist[i] << " ";
    }
}