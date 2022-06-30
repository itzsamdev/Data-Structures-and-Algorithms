#include <bits/stdc++.h>
using namespace std;

// Check whether a number is power of 2
int main()
{
    int n;
    n = 16;
    if ((n & (n - 1)) == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}