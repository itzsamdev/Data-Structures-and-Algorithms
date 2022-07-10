#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// PreOrder build of the tree  (root-left-right)
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1) // Base case
        return NULL;

    Node *n = new Node(d);
    n->left = buildTree(); // Baki Recursion dekh lega
    n->right = buildTree();
    return n;
}