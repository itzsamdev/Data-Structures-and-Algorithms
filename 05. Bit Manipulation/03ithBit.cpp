#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1 << i);
    return 1 ? mask > 0 : 0;
}

void SetIthBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}
void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}
void updateIthBit(int &n, int i, int v)
{
    clearIthBit(n, i);
    int mask = (v << i);
    n = n | mask;
}
void clearLastIBits(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}
int main()
{
    // Get ith Bit
    int n = 13;
    int i = 2;
    cout << getIthBit(n, i) << endl;

    // Set ith bit;
    SetIthBit(n, 1);
    cout << n << endl;
    // Clear ith Bit
    clearIthBit(n, 1);
    cout << n << endl;
    // Update ith bit
    updateIthBit(n, 1, 1);
    cout << n << endl;

    clearLastIBits(n, 2);
    cout << n << endl;
    return 0;
}