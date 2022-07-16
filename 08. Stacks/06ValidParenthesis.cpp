#include <bits/stdc++.h>
using namespace std;

bool isMatching(char a, char b)
{

    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
bool valid(string s)
{
    stack<char> st;

    for (char x : s)
    {
        if ((x == '(') || (x == '{') || (x == '['))
            st.push(x);

        if (x == ')' || x == '}' || x == ']')
        {
            if (st.empty())
                return false;
            else if (isMatching(st.top(), x) == false)
                return false;
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}

int main()
{
    string s1 = "()[]{}";
    string s2 = "())({}";

    cout << valid(s1) << endl;
    cout << valid(s2) << endl;
    return 0;
}
