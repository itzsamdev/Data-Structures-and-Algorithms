#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> pairSum(vector<int> arr, int S)
{
    unordered_set<int> s;
    vector<pair<int, int>> ans;
    for (auto i : arr)
    {
        int temp = S - i;
        if (s.find(temp) != s.end())
        {
            ans.push_back({temp, i});
        }
        s.insert(i);
    }
    return ans;
}
int main()
{
    vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
    int S = 4;

    auto res = pairSum(arr, S);
    if (res.size() == 0)
    {
        cout << "No Pair found" << endl;
    }
    else
    {
        for (auto i : res)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}