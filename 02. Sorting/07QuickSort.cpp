#include <bits/stdc++.h>
using namespace std;

int parti(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // Finding the pivot element whose left elements are smaller than it and right bigger
    int p = parti(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {10, 5, 2, 0, 7, 6, 4};
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}