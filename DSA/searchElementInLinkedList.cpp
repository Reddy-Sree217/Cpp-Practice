// GFG
// https://www.geeksforgeeks.org/search-an-element-in-a-linked-list-iterative-and-recursive/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertNode(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

bool searchElementInLinkedList(Node *head, int value)
{
    Node *p = head;
    while (p != NULL){
        if(p->data == value){
            return true;
        }
        p=p->next;
    }
    return false;
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
    insertNode(&head, 0);
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);
    insertNode(&head, 6);
    printList(head);
    bool result = searchElementInLinkedList(head,3);
    cout << result << endl;
    return 0;
}