#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {10, 20, 25, 35, 40, 45, 50};
    int n = sizeof(arr) / sizeof(int);
    int k = 40;
    cout << binarySearch(arr, n, k);
    return 0;
}