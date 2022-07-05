#include <bits/stdc++.h>
using namespace std;
// Find the majority Element such that length of element is more than half of size of array

// Morris Voting Algorithm
int majorityElement(vector<int> &nums)
{
    int curr = 0, votes = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[curr] == nums[i])
        {
            votes++;
        }
        else
        {
            votes--;
        }
        if (votes == 0)
        {
            curr = i;
            votes = 1;
        }
    }
    return nums[curr];
}
int main()
{

    return 0;
}