#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;

    Node *temp1 = head;
    Node *temp2 = head->next;

    while (temp2)
    {
        while (temp1->data == temp2->data)
        {
            if (temp2->next == NULL)
            {
                temp1->next = NULL;
                return head;
            }
            temp2 = temp2->next;
            temp1->next = temp2;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return head;
}