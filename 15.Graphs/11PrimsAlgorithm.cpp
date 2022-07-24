#include <bits/stdc++.h>
using namespace std;

// Return weight of all edges after finding minimum spanning tree using Prim's Algorithm
int spanningTree(int V, vector<vector<int>> adj[])
{
    vector<int> key(V, INT_MAX);
    vector<bool> mst(V, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    key[0] = 0;
    pq.push({0, 0});

    while (!pq.empty())
    {
        // Finding the minimum
        int u = pq.top().second;
        pq.pop();
        mst[u] = true;

        for (auto nodes : adj[u])
        {
            int nextNode = nodes[0];
            int weight = nodes[1];

            if (mst[nextNode] == false && weight < key[nextNode])
            {
                key[nextNode] = weight;
                pq.push({key[nextNode], nextNode});
            }
        }
    }
    int res = 0;
    for (int i = 0; i < V; i++)
    {
        res += key[i];
    }
    return res;
}