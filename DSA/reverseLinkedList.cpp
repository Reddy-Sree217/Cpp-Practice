#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insert(Node **head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }
    return prev;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    insert(&head, 1);
    insert(&head, 11);
    insert(&head, 111);
    insert(&head, 1111);
    insert(&head, 11111);
    insert(&head, 111111);
    printList(head);
    head = reverseLinkedList(head);
    printList(head);
    return 0;
}
