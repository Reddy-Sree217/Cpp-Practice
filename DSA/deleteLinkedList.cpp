#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl<< endl;
}

void insertNode(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void deleteList(Node** head){
    Node* current = *head;
    Node* tmp = NULL;
    while(current != NULL){
        tmp = current->next;
        delete current;
        current = tmp;
    }
    *head = NULL;
}

int main()
{
    Node *head = NULL;
    // printList(head);
    insertNode(&head, 0);
    // printList(head);
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);
    printList(head);

    deleteList(&head);
    printList(head);
    return 0;
}