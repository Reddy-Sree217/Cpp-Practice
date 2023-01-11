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
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void deleteHead(Node **head)
{
    if (head == NULL)
    {
        return;
    }
    Node *p = *head;
    *head = (*head)->next;
    free(p);
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *p = head;
    head = head->next;
    free(p);
    return head;
}

void deleteEnd(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *p = head;
    Node *q = p->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}

void deleteAtIndex(Node **head, int index)
{
    if (head == NULL)
    {
        return;
    }
    Node *p = *head;
    if (index == 1)
    {
        *head = (*head)->next;
        delete p;
    }
    else
    {
        int i = 2;
        while (i != index && p->next != NULL)
        {
            p = p->next;
            i++;
        }
        Node *q = p->next;
        p->next = q->next;
        free(q);
    }
}
void deleteNodeOfValue(Node **head, int value)
{
    if (head == NULL)
    {
        return;
    }
    Node *p = *head;
    Node *q = NULL;
    // Node *q = head->next;
    if (p != NULL && p->data == value)
    {
        *head = (*head)->next;
        free(p);
    }
    else
    {
        while (p->data != value && p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
    }
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    Node *seventh = new Node();

    head->data = 0;
    head->next = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seventh;

    seventh->data = 7;
    seventh->next = NULL;

    printList(head);

    // head = deleteHead(head);
    // printList(head);

    // Both Works

    // cout << "Deleting head" << endl;
    // deleteHead(&head);
    // printList(head);

    // cout << "Deleting End" << endl;
    // deleteEnd(head);
    // printList(head);

    cout << "Deleting at Index" << endl;
    deleteAtIndex(&head, 2);
    printList(head);

    // cout << "Deleting of Node with specific Value" << endl;
    // deleteNodeOfValue(&head, 2);
    // printList(head);

    return 0;
}