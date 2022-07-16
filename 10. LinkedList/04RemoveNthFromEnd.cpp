#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// Print
void printLL(node *head)
{
    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Approach Slow and Fast Pointers
void removeNthFromEnd(node *&head, int n)
{
    node *fast = head;
    node *slow = head;
    for (int i = 1; i <= n; i++)
    {
        fast = fast->next;
    }
    // Edge case if nth from last is first node
    if (fast->next == NULL)
    {
        head = head->next;
        return;
    }
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
}
int main()
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *forth = new node(40);
    node *fifth = new node(50);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    printLL(head);
    removeNthFromEnd(head, 2);
    printLL(head);

    return 0;
}