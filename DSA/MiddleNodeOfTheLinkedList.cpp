//GFG
// https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/

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

int lengthOfLinkedList(Node* head){
    Node* p = head;
    int i=0;
    while(p!=NULL){
        i++;
        p=p->next;
    }
    // cout<<"Length of LinkedList is "<<i<<endl;
    return i;
}


int middleNode(Node* head){
    int len = lengthOfLinkedList(head);
    Node* p = head;
    int middleIndex = (len/2) + 1;
    int i=1;
    while(i!=middleIndex){
        p=p->next;
        i++;
    }
    return p->data;
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
    // insertNode(&head, 5);

    printList(head);

    int value = middleNode(head);
    cout<<value<<endl;
    // lengthOfLinkedList(head);
    return 0;
}