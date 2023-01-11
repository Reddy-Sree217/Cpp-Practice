#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        left = NULL;
        right = NULL;
        data = 0;
    }
    Node(int val)
    {
        left = NULL;
        right = NULL;
        data = val;
    }
};

void postOrderTraversal(Node *root)
{
    if (root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = new Node(4);
    Node *p1 = new Node(1);
    Node *p2 = new Node(6);
    Node *c1 = new Node(5);
    Node *c2 = new Node(2);

    root->left = p1;
    root->right = p2;
    p1->left = c1;
    p1->right = c2;
    postOrderTraversal(root);
    return 0;
}
