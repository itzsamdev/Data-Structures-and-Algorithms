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

// 2 pointer approach Time O(n+m)
Node *Intersection(Node *headA, Node *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    Node *temp1 = headA;
    Node *temp2 = headB;
    while (temp1 != temp2)
    {
        if (temp1 == NULL)
        {
            temp1 = headB;
        }
        else
        {
            temp1 = temp1->next;
        }
        if (temp2 == NULL)
        {
            temp2 = headA;
        }
        else
        {
            temp2 = temp2->next;
        }
    }
    return temp1;
}