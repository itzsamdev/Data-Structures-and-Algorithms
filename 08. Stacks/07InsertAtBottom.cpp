#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int n)
{
    if (s.size() == 0)
    {
        s.push(n);
        return;
    }
    int ele = s.top();
    s.pop();
    insertAtBottom(s, n);
    s.push(ele);
}
int main()
{
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    insertAtBottom(s, 7);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}