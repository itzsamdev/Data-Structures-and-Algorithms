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
node *addTwoNumbers(node *l1, node *l2)
{
    node *l3 = new node();
    int carry = 0;
    node *head = l3;
    while (l1 && l2)
    {
        int value = l1->val + l2->val + carry;
        carry = value / 10;
        l3->val = value % 10;
        l1 = l1->next;
        l2 = l2->next;
        if (l1 || l2)
        {
            node *nextNode = new node();
            l3->next = nextNode;
            l3 = l3->next;
        }
    }
    while (l1)
    {
        int value = l1->val + carry;
        carry = value / 10;
        l3->val = value % 10;
        l1 = l1->next;
        if (l1)
        {
            node *nextNode = new node();
            l3->next = nextNode;
            l3 = l3->next;
        }
    }
    while (l2)
    {
        int value = l2->val + carry;
        carry = value / 10;
        l3->val = value % 10;
        l2 = l2->next;
        if (l2)
        {
            node *nextNode = new node();
            l3->next = nextNode;
            l3 = l3->next;
        }
    }
    if (carry != 0)
    {
        l3->next = new node(carry);
    }
    return head;
}
