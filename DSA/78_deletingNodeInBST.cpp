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

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void insert(Node *root, int val)
{
    Node *newNode = new Node(val);
    Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data > val)
            root = root->left;
        else
            root = root->right;
    }
    if (prev->data > val)
        prev->left = newNode;
    else
        prev->right = newNode;
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(5);
    Node *p1 = new Node(3);
    Node *p2 = new Node(7);
    Node *p1c1 = new Node(1);
    Node *p1c2 = new Node(4);
    Node *p2c1 = new Node(6);
    root->left = p1;
    root->right = p2;
    p1->left = p1c1;
    p1->right = p1c2;
    p2->left = p2c1;
    inOrder(root);
    // insert(root, 10);
    // cout << endl;
    // inOrder(root);
    // insert(root, 2);
    // cout << endl;
    // inOrder(root);


    
    return 0;
}
