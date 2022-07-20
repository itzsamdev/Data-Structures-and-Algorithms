#include <bits/stdc++.h>
using namespace std;

// Approach: Take transpose then reverse rows
int main()
{
    int N = 4;
    int mat[N][N] = {{1, 1, 1, 1},
                     {2, 2, 2, 2},
                     {3, 3, 3, 3},
                     {4, 4, 4, 4}};

    // Transpose
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse Rows
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            swap(mat[i][j], mat[N - i - 1][j]);
        }
    }
    // Printing matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}