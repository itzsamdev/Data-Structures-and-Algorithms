#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int middle)
{
    if (s.size() == middle)
    {
        s.pop();
        return;
    }
    int ele = s.top();
    s.pop();
    solve(s, middle);
    s.push(ele);
}
void deleteMid(stack<int> &s, int sizeOfStack)
{
    int middle = (sizeOfStack + 1) / 2;
    solve(s, middle);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int size = s.size();
    deleteMid(s, size);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}