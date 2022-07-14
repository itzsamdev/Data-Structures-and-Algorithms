#include <bits/stdc++.h>
using namespace std;

// Memoization O(N) Time, O(N) Space
int fib(int n, int dp[])
{
    if (n <= 1)
    {
        return dp[n] = n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

// Tabulation O(N)Time , O(N)Space
int fibTab(int n)
{
    int dp[n + 1] = {-1};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// Space Optimization O(N)time, O(1)Space
int fibOpt(int n)
{
    int i = 0;
    int j = 1;
    for (int k = 2; i <= n; k++)
    {
        int temp = i + j;
        i = j;
        j = temp;
    }
    return j;
}
int main()
{
    int n = 7;
    int dp[n + 1] = {0};

    cout << fib(n, dp) << endl;
    cout << fibTab(n) << endl;
    cout << fibOpt(n) << endl;
    return 0;
}