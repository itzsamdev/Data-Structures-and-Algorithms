#include <bits/stdc++.h>
using namespace std;

// Graph class
class Graph
{
public:
    int v;
    // Array or vectors in which each vector store adjacent elements of ith node
    vector<int> *list;

    Graph(int vertices)
    {
        v = vertices;
        list = new vector<int>[v];
    }
    // Stroring adjacent elements
    void insert(int i, int j, bool undirected = true)
    {
        list[i].push_back(j);
        if (undirected)
        {
            list[j].push_back(i);
        }
    }
    // Printing graph and its adjacent elements
    void printGraph()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << "-->";
            for (auto nodes : list[i])
            {
                cout << nodes << " ";
            }
            cout << endl;
        }
    }
    // Time  O(N) Space O(N)
    void bfsTraversal(int v)
    {
        queue<int> q;
        vector<int> visited(v, 0); // Visited vector to avoid double print

        // Pushing first element into queue and marking as visited
        q.push(0);
        visited[0] = 1;
        while (!q.empty())
        {
            int f = q.front();
            cout << f << " ";
            q.pop(); // Popping element after printing

            // Pushing it's advacent nodes into queue
            for (auto node : list[f])
            {
                if (visited[node] != 1)
                {
                    q.push(node);
                    visited[node] = 1;
                }
            }
        }
    }

    void dfsHelper(int node, vector<int> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (auto nbr : list[node])
        {
            if (visited[nbr] != 1)
            {
                dfsHelper(nbr, visited);
            }
        }
        return;
    }

    void dfsTraversal(int source)
    {
        vector<int> visited(v, 0);
        dfsHelper(source, visited);
    }
};

int main()
{
    // Creating a graph
    Graph g(6);
    g.insert(0, 1);
    g.insert(0, 4);
    g.insert(2, 1);
    g.insert(3, 4);
    g.insert(4, 5);
    g.insert(2, 3);
    g.insert(3, 5);

    g.bfsTraversal(6);
    cout << endl;
    g.dfsTraversal(0);
    return 0;
}