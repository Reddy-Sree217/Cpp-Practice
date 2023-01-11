#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
    cout << endl;
}

void insertAtBegin(Node **head, int Element)
{
    Node *newElement = new Node();
    newElement->data = Element;
    newElement->next = *head;
    *head = newElement;
}

void insertAtIndex(Node *head, int Element, int index)
{
    Node *newElement = new Node();
    newElement->data = Element;
    Node *p = head;
    int i = 1;
    while (i != index)
    {
        p = p->next;
        i++;
    }
    newElement->next = p->next;
    p->next = newElement;
}

void insertAtEnd(Node *head, int value)
{
    Node *newElement = new Node();
    newElement->data = value;
    newElement->next = NULL;

    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newElement;
}

void insertionAfterNode(Node *prevNode, int value)
{
    Node *newElement = new Node();
    newElement->data = value;
    newElement->next = prevNode->next;
    prevNode->next = newElement;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;
    printList(head);

    cout << "Insertion at begining" << endl;
    insertAtBegin(&head, 10);
    printList(head);

    cout << "Insertion at index" << endl;
    insertAtIndex(head, 20, 2);
    printList(head);

    cout << "Insertion at end" << endl;
    insertAtEnd(head, 200);
    printList(head);

    cout << "Insertion After Node" << endl;
    insertionAfterNode(second, 1500);
    printList(head);

    return 0;
}