#include <bits/stdc++.h>
using namespace std;

// Recursion O(2^N)
int solve(int wt[], int val[], int W, int N)
{
    if (N == 0 || W == 0)
        return 0;

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[N - 1] > W)
        return solve(wt, val, W, N - 1);

    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
        return max(
            val[N - 1] + solve(wt, val, W - wt[N - 1], N - 1),
            solve(wt, val, W, N - 1));
}

// Memoization
int solveMemo(int wt[], int val[], int W, int N, vector<vector<int>> dp)
{
    if (N == 0 || W == 0)
    {
        return 0;
    }
    if (dp[N][W] != -1)
    {
        return dp[N][W];
    }
    int result;
    if (W < wt[N])
    {
        result = solveMemo(wt, val, W, N - 1, dp);
    }
    else
    {
        result = max(solveMemo(wt, val, W, N - 1, dp),
                     solveMemo(wt, val, W - wt[N], N - 1, dp) + val[N]);
    }
    return dp[N][W] = result;
}

// Tabulation
int solveTabu(int wt[], int val[], int W, int N)
{
    int dp[N + 1][W + 1];

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (wt[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j],                           // Not pick
                               val[i - 1] + dp[i - 1][j - wt[i - 1]]); // Pick
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[N][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << solve(wt, val, W, n) << endl;

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    cout << solveMemo(wt, val, W, n, dp) << endl;
    cout << solveTabu(wt, val, W, n) << endl;
    return 0;
}