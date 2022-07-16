#include <iostream>
using namespace std;

class stack
{
public:
    int arr[10] = {0};
    int t;
    stack()
    {
        t = -1;
    }
    void top()
    {
        if (t == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << arr[t] << endl;
        }
    }
    void pop()
    {
        if (t == -1)
        {
            cout << "Cannot pop from empty stack" << endl;
        }
        else
        {
            arr[t] = 0;
            t--;
        }
    }
    void push(int n)
    {
        if (t == 9)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            t++;
            arr[t] = n;
        }
    }

    bool isEmpty()
    {
        if (t == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int size()
    {
        cout << t + 1 << endl;
        return t + 1;
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.size();
    s.pop();
    s.top();
    return 0;
}