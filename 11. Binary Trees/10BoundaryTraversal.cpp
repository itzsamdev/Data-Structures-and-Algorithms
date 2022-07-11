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

void traverseLeft(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    ans.push_back(root->data);
    if (root->left)
        traverseLeft(root->left, ans);
    else
        traverseLeft(root->right, ans);
}
void traverseLeaf(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}
void traverseRight(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    if (root->right)
        traverseRight(root->right, ans);
    else
        traverseRight(root->left, ans);

    ans.push_back(root->data);
}
vector<int> boundary(Node *root)
{
    vector<int> ans;
    ans.push_back(root->data);

    // Left nodes
    traverseLeft(root->left, ans);

    // Leaf nodes
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);

    // right nodes
    traverseRight(root->right, ans);

    return ans;
}