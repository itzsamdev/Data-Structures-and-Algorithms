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

Node *rotateRight(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;

    int count = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->next = head;
    k = k % count;
    int jump = count - k;
    for (int i = 1; i < jump; i++)
    {
        head = head->next;
    }
    Node *newHead = head->next;
    head->next = NULL;
    return newHead;
}