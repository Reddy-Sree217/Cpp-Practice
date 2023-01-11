#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *insertAtHead(Node *head, int value)
{
    Node *p = head;
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->next = head;
    head = newNode;
    return head;
}

void insertAtHead(Node **head, int value)
{
    Node *p = *head;
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    while(p->next!= *head){
        p=p->next;
    }
    p->next = newNode;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head)
{
    Node *p = head;
    // while (p->next != head)
    // {
    //     cout << p->data << " ";
    //     p = p->next;
    // }
    // cout<<p->data;

    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);

    cout << endl;
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 0;
    head->next = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;

    printList(head);

    // head = insertAtHead(head, 10);
    insertAtHead(&head, 10);
    printList(head);

    return 0;
}