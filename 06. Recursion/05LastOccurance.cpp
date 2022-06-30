#include <bits/stdc++.h>
using namespace std;

int findLast(int arr[], int n, int k)
{
    if (n == 0)
        return -1;

    int subProblem = findLast(arr + 1, n - 1, k);
    if (subProblem == -1)
    {
        if (arr[0] == k)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subProblem + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 3, 2, 6, 10, 5, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << findLast(arr, n, 5) << endl;
    return 0;
}