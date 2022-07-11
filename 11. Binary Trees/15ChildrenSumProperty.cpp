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

bool solve(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if (root->left)
        sum += root->left->data;
    if (root->right)
        sum += root->right->data;

    return (root->data == sum) && solve(root->left) && solve(root->right);
}
int isSumProperty(Node *root)
{
    return solve(root);
}