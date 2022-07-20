#include <bits/stdc++.h>
using namespace std;

// Approach: swaping all elements except diagonals
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