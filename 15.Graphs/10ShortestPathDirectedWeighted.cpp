#include <bits/stdc++.h>
using namespace std;

void topoSort(vector<int> &vis, stack<int> &s, vector<pair<int, int>> adj[], int v,
              int node)
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (vis[it.first] == 0)
        {
            topoSort(vis, s, adj, v, it.first);
        }
    }
    s.push(node);
}
void ShortestPath(int src, int v, vector<pair<int, int>> adj[])
{
    vector<int> vis(v, 0);
    stack<int> s;

    for (int i = 0; i < v; i++)
    {
        if (vis[i] == 0)
        {
            topoSort(vis, s, adj, v, i);
        }
    }
    vector<int> dis(v, INT_MAX);
    dis[src] = 0;

    while (!s.empty())
    {
        int node = s.top();
        s.pop();
        if (dis[node] != INT_MAX)
        {
            for (auto it : adj[node])
            {
                if (dis[node] + it.second < dis[it.first])
                {
                    dis[it.first] = dis[node] + it.second;
                }
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
}