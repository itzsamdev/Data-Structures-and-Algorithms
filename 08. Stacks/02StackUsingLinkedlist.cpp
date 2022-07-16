#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node(int d)
    {
        next = NULL;
        data = d;
    }
    Node()
    {
        next = NULL;
        data = 0;
    }
};
class stack
{
public:
    Node *head;
    int size;
    stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        head = head->next;
        size--;
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }

    int top()
    {
        return head->data;
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout << s.top() << endl;

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}