#include <bits/stdc++.h>
using namespace std;

pair<int, int> binarySearch(int mat[][4], int n, int m, int key)
{
    if (key < mat[0][0] && key > mat[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            return {i, j};
        }
        else if (mat[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}
int main()
{
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    pair<int, int> ans = binarySearch(arr, 4, 4, 11);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}