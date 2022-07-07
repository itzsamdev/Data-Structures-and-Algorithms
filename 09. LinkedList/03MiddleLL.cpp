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

// Print the middle element of linkedlist
int middleLL(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    if (head->next == NULL)
    {
        return head->data;
    }
    node *fast = head;
    node *slow = head;
    // If number of nodes are even then the node after middle will be printed:
    //  1->2->3->4
    //  Output = 3
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
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

    cout << middleLL(head);

    return 0;
}