#include <bits/stdc++.h>
using namespace std;

int findFirst(int arr[], int n, int k)
{
    if (n == 0)
        return -1;

    if (arr[0] == k)
    {
        return 0;
    }
    int subProblem = findFirst(arr + 1, n - 1, k);
    if (subProblem != -1)
    {
        return subProblem + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 3, 2, 6, 10, 5, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << findFirst(arr, n, 6) << endl;
    return 0;
}