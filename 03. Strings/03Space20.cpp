#include <bits/stdc++.h>
using namespace std;

// Replace all spaces after word with %20
void replace_spaces(char *paragraph)
{
    int spaces = 0;
    for (int i = 0; paragraph[i] != '\0'; i++)
    {
        if (paragraph[i] == ' ')
        {
            spaces++;
        }
    }

    int indx = strlen(paragraph) + 2 * spaces;
    paragraph[indx] = '\0';
    for (int i = strlen(paragraph) - 1; i >= 0; i--)
    {
        if (paragraph[i] == ' ')
        {
            paragraph[indx - 1] = '0';
            paragraph[indx - 2] = '2';
            paragraph[indx - 3] = '%';
            indx = indx - 3;
        }
        else
        {
            paragraph[indx - 1] = paragraph[i];
            indx--;
        }
    }
}
int main()
{
    char paragraph[10000];
    cin.getline(paragraph, 1000);
    replace_spaces(paragraph);
    cout << paragraph << endl;

    return 0;
}