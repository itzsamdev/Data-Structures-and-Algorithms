#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> adj[], vector<int> &visited, int parent)
{
    visited[node] = 1;
    for (auto i : adj[node])
    {
        if (visited[i] == 0)
        {
            if (dfs(i, adj, visited, node))
            {
                return true;
            }
        }
        else if (parent != i)
        {
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == 0)
        {
            if (dfs(i, adj, visited, -1))
            {
                return true;
            }
        }
    }
    return false;
}