#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &visited, vector<int> adj[], stack<int> &s, int node)
{
    visited[node] = 1;

    for (auto it : adj[node])
    {
        if (visited[it] == 0)
        {
            dfs(visited, adj, s, it);
        }
    }
    s.push(node);
}

vector<int> topoSort(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);
    stack<int> s;

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == 0)
        {
            dfs(visited, adj, s, i);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        int ele = s.top();
        s.pop();
        ans.push_back(ele);
    }
    return ans;
}