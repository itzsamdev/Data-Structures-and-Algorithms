#include <bits/stdc++.h>
using namespace std;

// Brute Force
int power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int powerFast(int x, int n)
{
    if (n == 0)
        return 1;

    int subProb = powerFast(x, n / 2);
    int subProbSq = subProb * subProb;
    if (n & 1)
    {
        return x * subProbSq;
    }
    else
    {
        return subProbSq;
    }
}
int main()
{
    int x = 2, n = 10;
    cout << power(x, n) << endl;
    cout << powerFast(x, n) << endl;
    return 0;
}