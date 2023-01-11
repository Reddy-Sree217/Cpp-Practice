#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int val;
    Node() {}
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    head->next = second;
    Node *third = new Node(3);
    second->next = third;
    printList(head);
    return 0;
}
