#include <bits/stdc++.h>
using namespace std;
// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
/* Output :
1
2 3
4 5 6
7
*/
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

// Level Order build of the tree  (root-left-right)
Node *buildTree()
{
    int d;
    cin >> d;
    Node *root = new Node(d);
    queue<Node *> q;

    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
        {
            current->right = new Node(c1);
            q.push(current->right);
        }
    }
    return root;
}

// Level Order traversal
void LevelOrderPrint(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
                q.push(NULL); // Insert a new null for next line
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = buildTree();
    LevelOrderPrint(root);
}