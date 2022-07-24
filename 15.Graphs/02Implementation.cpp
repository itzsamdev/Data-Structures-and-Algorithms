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

    g.printGraph();
    return 0;
}