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

void solve(struct Node *root, int k, vector<int> &ans)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        ans.push_back(root->data);
    }
    solve(root->left, k - 1, ans);
    solve(root->right, k - 1, ans);
}
// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    solve(root, k, ans);
    return ans;
}