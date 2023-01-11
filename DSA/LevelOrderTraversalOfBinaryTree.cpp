#include <iostream>
#include <queue>
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

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    if (root == NULL)
        return;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            if (q.empty())
                return;
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << temp->data<<" ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}
/*
        4
       / \
      1   6
     / \
    5   2

*/

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
    LevelOrderTraversal(root);
    return 0;
}
