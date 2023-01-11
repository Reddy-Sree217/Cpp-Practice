#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

void printList(Node *head, Node *tail)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    Node*q = tail;
    while(q!=NULL){
        cout<<q->data<<" ";
        q = q->prev;
    }
    cout<<endl;
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->prev = NULL;
    head->data = 0;
    head->next = first;

    first->prev = head;
    first->data = 1;
    first->next = second;

    second->prev = first;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 4;
    fourth->next = NULL;

    printList(head, fourth);
    return 0;
}