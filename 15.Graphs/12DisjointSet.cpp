#include <bits/stdc++.h>
using namespace std;

int parent[10000];
int ranks[10000];

// Making set data structure
void makeSet(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        ranks[i] = 0;
    }
}
// Finding parent
int findPar(int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = findPar(parent[node]);
}
// Combine both
void Union(int x, int y)
{
    x = findPar(x);
    y = findPar(y);

    if (ranks[x] < ranks[y])
    {
        parent[y] = x;
    }
    else if (ranks[y] < ranks[x])
    {
        parent[x] = y;
    }
    else
    {
        parent[x] = y;
        ranks[x]++;
    }
}

int main()
{
    makeSet(10);
    int m;
    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        Union(x, y);
    }
    // If 2 and 3 belongs to the same component or not
    if (findPar(2) != findPar(3))
    {
        cout << "Different Component" << endl;
    }
    else
    {
        cout << "Same Component" << endl;
    }
    return 0;
}