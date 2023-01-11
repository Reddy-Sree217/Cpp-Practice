#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertAtEnd(Node **head, int val)
{
    Node *p = *head;
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if (p == NULL)
    {
        *head = newNode;
        return;
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
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

Node *mergeList(Node *head1, Node *head2)
{
    Node *dummyNode = new Node();
    dummyNode->data = -1;
    Node *p = dummyNode;
    Node *p1 = head1;
    Node *p2 = head2;
    while ((p1 != NULL) && (p2 != NULL))
    {
        if (p1->data < p2->data)
        {
            p->next = p1;
            p1 = p1->next;
        }
        else
        {
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    if (p1 != NULL)
        p->next = p1;
    else if (p2 != NULL)
        p->next = p2;

    return dummyNode->next;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    insertAtEnd(&head1, 5);
    insertAtEnd(&head1, 10);
    insertAtEnd(&head1, 15);
    // insertAtEnd(&head1, 23);
    insertAtEnd(&head1, 40);
    printList(head1);
    insertAtEnd(&head2, 2);
    insertAtEnd(&head2, 3);
    insertAtEnd(&head2, 20);
    // insertAtEnd(&head2, 18);
    printList(head2);
    Node *tmp = mergeList(head1, head2);
    printList(tmp);
    return 0;
}