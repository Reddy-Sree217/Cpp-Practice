#include <iostream>
using namespace std;



class Node
{
public:
    int data;
    Node *next;
};

    Node *front = NULL;
    Node *rear = NULL;

void enqueue(Node *front, Node *rear, int val)
{
    Node *newNode = new Node();
    if (newNode == NULL)
    {
        cout << "Queue is full" << endl;
        return;
        newNode->data = val;
        newNode->next = NULL;
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            (rear)->next = newNode;
            rear = newNode;
        }
    }
}

void printList(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

int main()
{

    enqueue(front, rear, 1);
    enqueue(front, rear, 1);
    printList(front);
    return 0;
}