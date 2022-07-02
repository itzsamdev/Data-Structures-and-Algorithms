#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string paragraph = "This is india , A new india but a better india";
    string word;

    // Find all occurances of a word in a sentence
    getline(cin, word);
    int found = 0, occ = 0;
    for (int i = 0; i < paragraph.length(); i += found + 1)
    {
        // Find function in string returns index if found and -1 if not present
        found = paragraph.find(word, i);
        if (found == -1 && occ == 0)
        {
            cout << "Word not present";
            break;
        }
        if (found != -1)
        {
            occ++;
            cout << found << " ";
        }
    }

    return 0;
}