#include <bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    printPairs(arr, n);

    return 0;
}