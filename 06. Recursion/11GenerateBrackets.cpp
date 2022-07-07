#include <bits/stdc++.h>
using namespace std;

void generate(string s, int open, int close, int i, int n)
{
    if (i == 2 * n)
    {
        cout << s << endl;
        return;
    }
    if (open < n)
    {
        generate(s + '(', open + 1, close, i + 1, n);
    }
    if (close < open)
    {
        generate(s + ')', open, close + 1, i + 1, n);
    }
}

int main()
{
    int n = 3;
    string s;
    generate(s, 0, 0, 0, 3);
    return 0;
}