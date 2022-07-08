#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        val = 0;
        next = NULL;
    }
    Node(int d)
    {
        val = d;
        next = NULL;
    }
};
// Detect Whether there is cycle exists in a linkedlist
bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head == NULL)
        return false;
    if (head->next == NULL)
        return false;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
            return true;
    }
    return false;
}