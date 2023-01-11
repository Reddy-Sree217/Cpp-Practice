#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node();
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

Node *removeNode(Node *, int);

void push(Node **head, int val)
{
    Node *newNode = new Node(val);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *p = *head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
}

Node *removefromEnd(Node *head, int index)
{
    if (head == NULL)
        return NULL;
    int length = 0;
    Node *p = head;
    Node *q = head;
    while (p != NULL)
    {
        length++;
        p = p->next;
    }
    if (index == length)
    {
        return head->next;
    }
    index = length - index;
    // head = removeNode(head, index);
    int i = 1;
    while (i < index && q->next != NULL)
    {
        i++;
        q = q->next;
    }
    Node *temp = q->next;
    q->next = q->next->next;
    delete temp;
    return head;
}

Node *removeNode(Node *head, int index)
{
    Node *p = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete p;
        return NULL;
    }
    if (index == 1)
    {
        return head->next;
    }
    int i = 1;
    while (i < index - 1 && p->next != NULL)
    {
        p = p->next;
        i++;
    }
    Node *temp = p->next;
    p->next = p->next->next;
    delete temp;
    return head;
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

int main()
{

    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    printList(head);
    // head = removeNode(head, 1);
    // head = removeNode(head, 2);
    // head = removeNode(head, 1);
    // printList(head);
    head = removefromEnd(head, 1);
    printList(head);
    return 0;
}