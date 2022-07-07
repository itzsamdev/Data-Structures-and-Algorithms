#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node()
    {
        val = 0;
        next = NULL;
    }
    node(int d)
    {
        val = d;
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
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
node *mergeSortedLL(node *list1, node *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    node *ptr1 = list1;
    node *ptr2 = list2;
    node *ptr3 = new node();
    node *head = ptr3;
    while (ptr1 && ptr2)
    {
        if (ptr1->val < ptr2->val)
        {
            ptr3->val = ptr1->val;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->val = ptr2->val;
            ptr2 = ptr2->next;
        }
        node *nextNode = new node();
        ptr3->next = nextNode;
        ptr3 = ptr3->next;
    }
    while (ptr1)
    {
        ptr3->val = ptr1->val;
        ptr1 = ptr1->next;
        if (ptr1 != NULL)
        {
            node *nextNode = new node();
            ptr3->next = nextNode;
            ptr3 = ptr3->next;
        }
    }
    while (ptr2)
    {
        ptr3->val = ptr2->val;
        ptr2 = ptr2->next;
        if (ptr2 != NULL)
        {
            node *nextNode = new node();
            ptr3->next = nextNode;
            ptr3 = ptr3->next;
        }
    }
    return head;
}