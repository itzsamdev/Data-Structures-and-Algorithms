#include <bits/stdc++.h>
using namespace std;

int longestSubstr(string S)
{
    unordered_set<char> st;
    int len = 0;
    int i = 0;
    int j = 0;
    while (j < S.size())
    {
        auto t = st.find(S[j]); // 'a'

        if (t == st.end())
        {
            // storing length of maximum substring
            len = max(len, j - i + 1);
            st.insert(S[j]);
            j++;
        }
        else
        {
            st.erase(S[i]);
            i++;
        }
    }
    return len;
}

int main()
{
    string s = "abcabaabba";
    cout << longestSubstr(s) << endl;
    return 0;
}