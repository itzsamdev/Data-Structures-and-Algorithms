#include <bits/stdc++.h>
using namespace std;

// Time - O(2n)
void generate(int arr[], vector<int> temp, int i, int n)
{
    if (i == n)
    {
        for (auto x : temp)
        {
            cout << x << " ";
        }
        if (temp.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // Not Take
    generate(arr, temp, i + 1, n);
    temp.push_back(arr[i]);
    // Take
    generate(arr, temp, i + 1, n);
    temp.pop_back(); // Backtracking
}
int main()
{
    int arr[] = {3, 1, 2};
    vector<int> v;
    generate(arr, v, 0, 3);
    return 0;
}