
#include <bits/stdc++.h>
using namespace std;

// Given a string 's'. The task is to find the smallest window length that contains
// all the characters of the given string at least one time.
// For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be
// dbca.

// Two Pointer Sliding Window
int findSubString(string str)
{
    unordered_set<char> s;
    for (auto it : str)
    {
        s.insert(it);
    }
    int n = s.size();
    int i = 0;
    int j = 0;
    int ans = str.size();
    unordered_map<char, int> m;
    while (j < str.size())
    {
        m[str[j]]++;
        if (m.size() == n)
        {
            while (m[str[i]] > 1)
            {
                m[str[i]]--;
                i++;
            }
            ans = min(ans, j - i + 1);
        }
        j++;
    }
    return ans;
}