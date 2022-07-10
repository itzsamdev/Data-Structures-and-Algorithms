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

int height(Node *root, int &d)
{
    if (root == NULL)
        return 0;

    int lh = height(root->left, d);
    int rh = height(root->right, d);
    d = max(d, rh + lh);

    return max(lh, rh) + 1;
}
// Diameter = Longest path between any two nodes
// It may/ may not go through root
int findDiameter(Node *root)
{
    int d = 0;
    height(root, d);
    return d;
}