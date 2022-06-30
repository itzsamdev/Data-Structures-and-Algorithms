#include <bits/stdc++.h>
using namespace std;

string spell[] = {"Zero", "One", "Two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpell(int n)
{
    if (n == 0)
        return;

    int last = n % 10;
    printSpell(n / 10);
    cout << spell[last] << " ";
}
int main()
{
    int n = 2021;
    printSpell(n);
    return 0;
}