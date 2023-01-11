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

int main()
{
    Node *root = new Node(1);
    Node *p1 = new Node(2);
    Node *p2 = new Node(3);
    root->left = p1;
    root->right = p2;
    return 0;
}
