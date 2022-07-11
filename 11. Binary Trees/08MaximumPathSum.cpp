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

int maxpath(Node *root, int &maxi)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = max(0, maxpath(root->left, maxi));
    int rh = max(0, maxpath(root->right, maxi));

    maxi = max(maxi, lh + rh + root->data);
    return root->data + max(lh, rh);
}

int solve(Node *root)
{
    int maxi = INT_MIN;
    maxpath(root, maxi);
    return maxi;
}