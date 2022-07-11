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

int maxi = INT_MIN;
int mini = INT_MAX;
int findMax(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    maxi = max(maxi, root->data);
    findMax(root->left);
    findMax(root->right);
    return maxi;
}
int findMin(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    mini = min(mini, root->data);
    findMin(root->left);
    findMin(root->right);
    return mini;
}