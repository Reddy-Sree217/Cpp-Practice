// GFG
// https://www.geeksforgeeks.org/find-length-of-a-linked-list-iterative-and-recursive/

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

void lengthOfLinkedList(Node* head){
    Node* p = head;
    int i=0;
    while(p!=NULL){
        i++;
        p=p->next;
    }
    cout<<"Length of LinkedList is "<<i<<endl;
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

    printList(head);

    lengthOfLinkedList(head);
    return 0;
}