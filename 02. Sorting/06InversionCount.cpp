#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void join(int arr[], int s, int mid, int e)
{
    int i = s, j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            // Couting the inversion the elements bigger than arr[j]
            cnt += (mid - i + 1);
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
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
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        return join(arr, s, mid, e);
    }
}

int inversionCount(int arr[], int N)
{
    // Using merge sort
    mergeSort(arr, 0, N - 1);
    return cnt;
}

int main()
{
    int arr[] = {0, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << inversionCount(arr, n) << endl;
}