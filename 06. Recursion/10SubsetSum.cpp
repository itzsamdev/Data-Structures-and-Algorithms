#include <bits/stdc++.h>
using namespace std;

// Count No. of Subsets whose sum is equal to K
int generate(int arr[], int i, int n, int k)
{
    if (i == n)
    {
        if (k == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return generate(arr, i + 1, n, k - arr[i]) + generate(arr, i + 1, n, k);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << generate(arr, 0, 5, 6) << endl;
    return 0;
}