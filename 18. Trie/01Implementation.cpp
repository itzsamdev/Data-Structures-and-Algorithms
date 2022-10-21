#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    // Constructor
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // Base Case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        // Assuming All characters are capital
        int index = word[0] - 'A';
        TrieNode *child;
        // Present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // Absent
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        // Present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // Absent
        else
        {
            return false;
        }
        // Recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startwithUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return true;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        // Present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // Absent
        else
        {
            return false;
        }
        // Recursion
        return startwithUtil(child, word.substr(1));
    }
    bool startsWith(string prefix)
    {
        return startwithUtil(root, prefix);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ABCD");
    cout << "Present or not " << t->searchWord("ABCD") << endl;

    return 0;
}
