#include <bits/stdc++.h>
using namespace std;

void findShortestPath(string dir)
{
    int x = 0, y = 0;
    for (int i = 0; i < dir.length(); i++)
    {
        switch (dir[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }
    if (x >= 0 && y >= 0)
    {
        while (y--)
        {
            cout << 'N';
        }
        while (x--)
        {
            cout << 'E';
        }
    }
    else if (x <= 0 && y <= 0)
    {
        while (y <= 0)
        {
            cout << 'S';
            y++;
        }
        while (x <= 0)
        {
            cout << 'W';
            x++;
        }
    }
}

int main()
{
    string dir = "SNNNEWE";
    findShortestPath(dir);
    return 0;
}