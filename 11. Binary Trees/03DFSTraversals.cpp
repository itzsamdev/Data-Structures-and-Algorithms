#include <bits/stdc++.h>
using namespace std;
// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
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

// PreOrder build of the tree  (root-left-right)
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1) // Base case
        return NULL;

    Node *n = new Node(d);
    n->left = buildTree(); // Baki Recursion dekh lega
    n->right = buildTree();
    return n;
}
// Output : 1 2 4 5 7 3 6
void printPreOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
// Output : 4 2 7 5 1 3 6
void printInOrder(Node *root)
{
    if (root == NULL)
        return;

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}
// Output: 4 7 5 2 6 3 1
void printPostOrder(Node *root)
{
    if (root == NULL)
        return;

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = buildTree();
    printPreOrder(root);
    printInOrder(root);
    printPostOrder(root);
}