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
// given a linkedlist containing 0s and 1s sort it.
node *sortBinary(node *head)
{
    node *temp1 = head;
    node *temp2 = head;
    while (temp2)
    {
        if (temp2->data == 0)
        {
            swap(temp1->data, temp2->data);
            temp1 = temp1->next;
        }
        temp2 = temp2->next;
    }
    return head;
}