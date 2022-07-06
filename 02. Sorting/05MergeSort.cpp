#include <bits/stdc++.h>
using namespace std;

void join(int arr[], int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;
    // Push the smallest elements - Sorting
    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // Push the remaining elements
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
    return;
}
void mergeSort(int arr[], int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // Dividing array
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // Merging left and right into sorted array
    return join(arr, s, e);
}
int main()
{
    int arr[] = {13, 5, 9, 45, 27, 36, 58, 12};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}