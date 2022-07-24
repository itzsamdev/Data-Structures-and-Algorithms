#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> &visited, vector<int> adj[], vector<int> &recS, int node)
{
    visited[node] = 1;
    recS[node] = 1;

    for (auto it : adj[node])
    {
        if (visited[it] == 0)
        {
            if (dfs(visited, adj, recS, it))
            {
                return true;
            }
        }
        else if (recS[it] == 1)
        {
            return true;
        }
    }
    recS[node] = 0;
    return false;
}
// Function to detect cycle in a directed graph.
bool isCyclic(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    vector<int> recS(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == 0)
        {
            if (dfs(visited, adj, recS, i))
            {
                return true;
            }
        }
    }
    return false;
}