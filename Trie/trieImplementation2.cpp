#include <iostream>
using namespace std;

class Trie
{
public:
    Trie *trieNode[26];
    bool isEnd = false;
    int countPrefix = 0;
    int countWordEnding = 0;
};

Trie *root = new Trie();

void insert(string word)
{
    Trie *node = root;
    for (auto it : word)
    {
        if (node->trieNode[it - 'a'] == NULL)
            node->trieNode[it - 'a'] = new Trie();
        node->countPrefix++;
        node = node->trieNode[it - 'a'];
    }
    node->countWordEnding++;
    node->countPrefix++;
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

int countWordsEqualTo(string word)
{
    Trie *node = root;
    int ans = 0;
    for (auto it : word)
    {
        if (node->trieNode[it - 'a'] == NULL)
            return 0;
        node = node->trieNode[it - 'a'];
    }
    if (node->isEnd)
        ans += node->countWordEnding;
    return ans;
}

int countWordsStartingWith(string word)
{
    Trie *node = root;
    for (auto it : word)
    {
        if (node->trieNode[it - 'a'] == NULL)
            return 0;
        node = node->trieNode[it - 'a'];
    }
    return node->countPrefix;
}

int main()
{
    insert("hello");
    insert("world");
    insert("hel");
    insert("hell");
    insert("hello");
    insert("worl");
    insert("hello");
    cout << search("hello") << endl;
    cout << search("hell") << endl;
    cout << search("hellooo") << endl;
    cout << countWordsEqualTo("hello") << endl;
    cout << countWordsStartingWith("h") << endl;

    return 0;
}