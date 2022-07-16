#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = NULL;
    while (head != NULL)
    {
        curr = head->next;
        head->next = prev;
        prev = head;
        head = curr;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    if (head->next == NULL)
        return true;
    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverseList(slow->next);

    slow = slow->next;
    while (slow != NULL)
    {
        if (head->data != slow->data)
            return false;
        slow = slow->next;
        head = head->next;
    }
    return true;
}