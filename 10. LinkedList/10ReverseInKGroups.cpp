#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *ReverseInKGroups(node *head, int k)
{
    // Base case
    if (head == NULL)
        return NULL;

    // Reverse first k nodes
    node *curr = head;
    node *prev = NULL;
    node *next = NULL;
    int count = 1;

    while (curr != NULL && count <= k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    // Recursion dekh lega aake ka
    if (next != NULL)
    {
        head->next = ReverseInKGroups(next, k);
    }

    // Return new head
    return prev;
}