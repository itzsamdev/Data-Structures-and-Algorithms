#include <bits/stdc++.h>
using namespace std;

// Trapping Rain Water
int trappedWater(vector<int> heights)
{
    int n = heights.size();
    if (n <= 2)
    {
        return 0;
    }
    // Storing max height in left and max in right for each index
    vector<int> left(n, 0), right(n, 0);
    left[0] = heights[0];
    right[n - 1] = heights[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], heights[i]);
        right[n - i - 1] = max(right[n - i], heights[n - i - 1]);
    }
    // Subtracting minimum in left, right with current height to get trapped water
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += min(left[i], right[i]) - heights[i];
    }
    return res;
}
int main()
{
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trappedWater(heights) << endl;
    return 0;
}