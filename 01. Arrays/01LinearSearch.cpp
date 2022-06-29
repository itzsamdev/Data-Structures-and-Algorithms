#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int k = 30;
    if (linearSearch(arr, 10, k) == 1)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }

    return 0;
}