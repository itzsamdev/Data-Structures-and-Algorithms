#include <iostream>
using namespace std;

class twoStacks
{
public:
    int *arr;
    int top1, top2;
    int size;
    twoStacks(int n = 100)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }
    void push1(int x)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1()
    {
        if (top1 == -1)
        {
            return -1;
        }
        else
        {
            int temp = arr[top1];
            arr[top1] = 0;
            top1--;
            return temp;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2()
    {
        if (top2 == size)
        {
            return -1;
        }
        else
        {
            int temp = arr[top2];
            arr[top2] = 0;
            top2++;
            return temp;
        }
    }
};
