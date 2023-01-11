#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int arr[5];
int i = 0;

bool isSorted()
{
    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if (temp > arr[i])
            return false;
        temp = arr[i];
    }
    return true;
}

void inOrderTraversal(Node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        arr[i] = root->data;
        i++;
        inOrderTraversal(root->right);
    }
}

int main(int argc, char const *argv[])
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
    inOrderTraversal(root);
    cout << endl;
    if (isSorted())
        cout << "Binary Search Tree" << endl;
    else
        cout << "Not a Binary Search Tree" << endl;
    return 0;
}
