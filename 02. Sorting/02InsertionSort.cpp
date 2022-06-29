#include <bits/stdc++.h>
using namespace std;

// Insertion Sort O(N^2)
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i;
        while (j >= 0 && arr[j - 1] > curr)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = curr;
    }
}
int main()
{
    int arr[] = {13, 5, 9, 45, 27, 36, 58, 12};
    int n = sizeof(arr) / sizeof(int);
    InsertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}