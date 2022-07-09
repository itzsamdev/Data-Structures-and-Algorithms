/*
Given the head of a singly linked list, group all the nodes with odd indices
together followed by the nodes with even indices, and return the reordered list.
Input: 1->2->3->4->5->NULL
Output: 1->3->5->2->4->NULL
*/

void rearrangeEvenOdd(Node *head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
        return;

    Node *odd = head;
    Node *even = head->next;
    Node *hold = even;
    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = hold;
}