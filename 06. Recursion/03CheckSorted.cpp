#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if ((arr[0] < arr[1]) && checkSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 55, 50, 92};
    int n = sizeof(arr) / sizeof(int);
    cout << checkSorted(arr, n - 1);
    return 0;
}