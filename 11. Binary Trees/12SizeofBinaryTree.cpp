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

int getSize(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + getSize(root->left) + getSize(root->right);
}