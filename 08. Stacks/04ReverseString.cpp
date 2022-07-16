#include <bits/stdc++.h>
using namespace std;

// Reverse String using Stack
string rev(string &S, int len)
{
    stack<char> s;
    for (int i = 0; i < len; i++)
    {
        s.push(S[i]);
    }
    for (int i = 0; i < len; i++)
    {
        S[i] = s.top();
        s.pop();
    }
    return S;
}

int main()
{
    string S = "saiyam";
    int len = S.length();
    rev(S, len);
    cout << S << endl;
    return 0;
}
