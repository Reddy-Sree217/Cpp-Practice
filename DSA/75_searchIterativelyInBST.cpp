#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node() {}
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool searchInBSTIteratively(Node *root, int key)
{
    Node *p = root;
    while (p != NULL)
    {
        if (p->data == key)
            return true;
        else if (p->data > key)
            p = p->left;
        else
            p = p->right;
    }
    return false;
}

int main()
{
    Node *root = new Node(30);
    Node *p1 = new Node(20);
    Node *p2 = new Node(40);
    Node *c1 = new Node(10);
    Node *c2 = new Node(25);
    root->left = p1;
    root->right = p2;
    p1->left = c1;
    p1->right = c2;
    int key = 0;
    cout << searchInBSTIteratively(root, key);
    return 0;
}