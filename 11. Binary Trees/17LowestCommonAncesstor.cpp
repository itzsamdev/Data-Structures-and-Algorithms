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

Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *lh = lca(root->left, n1, n2);
    Node *rh = lca(root->right, n1, n2);

    if (lh == NULL)
        return rh;
    if (rh == NULL)
        return lh;

    return root;
}