#include <bits/stdc++.h>
using namespace std;

// Finf length of the mountain in an array
int mountain(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;
    for (int i = 1; i < n - 1;)
    {
        // Check is it's a peak element
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            int j = i;
            int cnt = 1;
            while (j > 0 && arr[j] > arr[j - 1])
            {
                cnt++;
                j--;
            }
            while (i < n - 1 && arr[i] > arr[i + 1])
            {
                cnt++;
                i++;
            }
            largest = max(largest, cnt);
        }
        else
        {
            i++;
        }
    }
    return largest;
}
int main()
{
    vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    cout << mountain(arr) << endl;
    return 0;
}