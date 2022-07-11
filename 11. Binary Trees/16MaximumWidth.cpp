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

int getMaxWidth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int res = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        res = max(res, size);
        for (int i = 0; i < size; i++)
        {
            Node *f = q.front();
            q.pop();
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
    return res;
}