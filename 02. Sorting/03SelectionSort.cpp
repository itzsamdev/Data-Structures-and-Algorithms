#include <bits/stdc++.h>
using namespace std;

// Selection Sort O(N^2)
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int curr = arr[i];
        int min_pos = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[min_pos], arr[i]);
    }
}
int main()
{
    int arr[] = {13, 5, 9, 45, 27, 36, 58, 12};
    int n = sizeof(arr) / sizeof(int);
    SelectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}