#include <bits/stdc++.h>
using namespace std;

bool checkSubset(string s, string x)
{
    // Using two pointers
    int i = s.length() - 1;
    int j = x.length() - 1;
    while (i >= 0 && j >= 0)
    {
        if (x[j] == s[i])
        {
            j--;
            i--;
        }
        else
        {
            i--;
        }
    }
    // j should be -1 because length of x is part of s so all characters are covered
    if (j == -1)
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "saiyam";
    string x = "sam";
    cout << checkSubset(s, x);
    return 0;
}