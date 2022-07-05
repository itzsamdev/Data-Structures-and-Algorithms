#include <bits/stdc++.h>
using namespace std;

void subsequences(string s, string temp, vector<string> &res)
{
    if (s.size() == 0)
    {
        res.push_back(temp);
        return;
    }
    char ch = s[0];
    // Substr = string starting from idnex 1
    string st = s.substr(1);
    // Includes
    subsequences(st, temp + ch, res);
    // Excludes
    subsequences(st, temp, res);
}

bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        // Lexographic Compare
        return s1 < s2;
    }
    // Length based Compare
    return s1.length() < s2.length();
}
int main()
{
    string s = "abcd";
    string output = "";
    vector<string> v;
    subsequences(s, output, v);

    sort(v.begin(), v.end(), compare);

    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}