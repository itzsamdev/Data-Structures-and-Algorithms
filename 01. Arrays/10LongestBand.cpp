#include <bits/stdc++.h>
using namespace std;

// Find length of largest band (Band - series of subsequences not having difference more than one)
int findLargestBand(vector<int> arr)
{
    unordered_set<int> s;
    // Putting all elements inside set
    for (auto it : arr)
    {
        s.insert(it);
    }
    // Searching for next elements
    int largest = 1;
    for (auto x : arr)
    {
        int previous = x - 1;
        // If previous not exist, this is starting of band
        if (s.find(previous) == s.end())
        {
            // Storing length of band
            int cnt = 1;
            int next = x + 1;
            while (s.find(next) != s.end())
            {
                cnt++;
                next++;
            }
            // Maximizing
            largest = max(largest, cnt);
        }
    }
    return largest;
}
int main()
{
    vector<int> arr = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    cout << findLargestBand(arr) << endl;
    return 0;
}