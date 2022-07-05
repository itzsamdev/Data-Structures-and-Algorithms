#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(N log N)+ N
// 2 Pointer Approach
vector<int> findTriplet(vector<int> arr, int S)
{
    // Sorting the original array
    sort(arr.begin(), arr.end());
    vector<int> ans;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        int curr = arr[i];
        int target = S - curr;
        int s = i + 1, e = arr.size() - 1;
        while (s < e)
        {
            int sum = arr[s] + arr[e];
            if (sum == target)
            {
                ans.push_back(arr[s]);
                ans.push_back(arr[e]);
                ans.push_back(arr[i]);
                return ans;
            }
            else if (sum < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    return {-1, -1, -1};
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int S = 18;
    auto ans = findTriplet(arr, S);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}