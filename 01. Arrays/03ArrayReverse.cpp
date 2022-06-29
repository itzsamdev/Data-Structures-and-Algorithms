#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}