#include <iostream>
using namespace std;

class Trie
{
public:
    Trie *trieNode[26]; // size =26 as only small alphabets
    bool isEnd = false;
};

Trie *root = new Trie();

void insert(string word)
{
    Trie *node = root;
    for (auto it : word)
    {
        if (node->trieNode[it - 'a'] == NULL)
            node->trieNode[it - 'a'] = new Trie();
        node = node->trieNode[it - 'a'];
    }
    node->isEnd = true;
}

bool search(string word)
{
    Trie *node = root;
    for (auto it : word)
    {
        if (node->trieNode[it - 'a'] == NULL)
            return false;
        node = node->trieNode[it - 'a'];
    }
    return node->isEnd;
}

bool startsWith(string word)
{
    Trie *node = root;
    for (auto it : word)
    {
        if (node->trieNode[it - 'a'] == NULL)
            return false;
        node = node->trieNode[it - 'a'];
    }
    return true;
}

int main()
{
    insert("hello");
    insert("world");
    cout << search("hello") << endl;
    cout << search("world") << endl;
    cout << startsWith("wo") << endl;
    return 0;
}