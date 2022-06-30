#include <bits/stdc++.h>
using namespace std;

void print(int matrix[][10], int n, int m)
{
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;
    while (startCol <= endCol && startRow <= endRow)
    {
        // Start Row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << matrix[startRow][col] << " ";
        }
        // End Col
        for (int row = startRow + 1; row <= endRow; row++)
        {
            // To avoid multiple printing when n and m are not equal
            if (startRow == endRow)
                break;
            cout << matrix[row][endCol] << " ";
        }
        // End Row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            cout << matrix[endRow][col] << " ";
        }
        // Start Col
        for (int row = endRow - 1; row > startRow; row--)
        {
            // To avoid multiple printing when n and m are not equal
            if (startCol == endCol)
                break;
            cout << matrix[row][startCol] << " ";
        }
        // Update the variables to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int arr[][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    print(arr, 4, 4);
    return 0;
}