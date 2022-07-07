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

// Implementation
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

    return 0;
}