#include <bits/stdc++.h>
using namespace std;

// Count number of ways to reach Nth stair
// At once you can jump one two or three steps
int ladder(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    return ladder(n - 1) + ladder(n - 2) + ladder(n - 3);
}
int main()
{
    int n = 5;
    cout << ladder(n) << endl;
    return 0;
}