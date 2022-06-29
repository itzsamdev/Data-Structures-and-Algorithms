#include <bits/stdc++.h>
using namespace std;

// Count Sort O(N + R)
void CountSort(int arr[], int n)
{
    // Largest Element
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    // Create a count array/vector
    vector<int> freq(largest + 1, 0);
    // Update the freq array
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    // Put back the elements from freq into original array
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}
int main()
{
    int arr[] = {13, 5, 9, 45, 27, 36, 58, 12};
    int n = sizeof(arr) / sizeof(int);
    CountSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}