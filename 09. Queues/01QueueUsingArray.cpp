#include <iostream>
using namespace std;

class queue
{
public:
    int front, rear, s;
    int arr[10];
    queue()
    {
        front = 0;
        rear = 0;
        s = 10;
    }
    void push(int d)
    {
        if (rear == s)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = d;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int size()
    {
        if (rear == front)
        {
            return 0;
        }
        return rear;
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;

        else
            return false;
    }
    int top()
    {
        if (rear == front)
        {
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.size() << endl;
    while (!q.isEmpty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}