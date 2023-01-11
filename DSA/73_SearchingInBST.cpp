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

int searchInBST(Node *root, int key)
{
    if (root == NULL)
        return 0;
    if (root->data == key)
        return 1;
    if (root->data > key)
        return searchInBST(root->left, key);
    else
        return searchInBST(root->right, key);
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
    int key = 10;
    cout << searchInBST(root, key);
    return 0;
}