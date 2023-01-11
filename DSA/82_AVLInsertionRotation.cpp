#include <iostream>
#include <algorithm>
using namespace std;

class treeNode
{
    int val;
    treeNode *left;
    treeNode *right;
    int height;

public:
    int getHeight(treeNode *);
    treeNode *createNode(int);
    int getBalanceFactor(treeNode *);
};

int treeNode::getHeight(treeNode *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

treeNode *treeNode::createNode(int val)
{
    treeNode *newNode = new treeNode();
    newNode->val = val;
    newNode->height = 1;
    newNode->left = NULL;
    newNode->right = NULL;
}

int treeNode::getBalanceFactor(treeNode *n)
{
    if (n == NULL)
        return 0;
    return abs(getHeight(n->left) - getHeight(n->right));
}

int main(int argc, char const *argv[])
{

    return 0;
}
