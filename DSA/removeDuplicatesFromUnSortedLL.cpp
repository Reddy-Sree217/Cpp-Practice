// GFG
// https://www.geeksforgeeks.org/remove-duplicates-from-an-unsorted-linked-list/
// code: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1/


#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void insertElement(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void removeDuplicates(Node *head)
{
    // if(head == NULL)
    //     return;
    // Node* to_free;
    // if(head->next!=NULL){
    // if(head->data == head->next->data){
    //     to_free = head->next;
    //     head->next = head->next->next;
    //     delete to_free;
    //     removeDuplicates(head);
    // }
    // else
    //     removeDuplicates(head->next);
    // }

    Node *p = head;
    Node *next_next;
    while (p->next != NULL)
    {
        if (p->data == p->next->data)
        {
            next_next = p->next;
            p->next = p->next->next;
            delete next_next;
        }
        else
            p = p->next;
    }
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


int main(){
    Node *head = NULL;
    insertElement(&head, 0);
    insertElement(&head, 1);
    insertElement(&head, 2);
    insertElement(&head, 6);
    insertElement(&head, 3);
    insertElement(&head, 6);
    insertElement(&head, 4);
    insertElement(&head, 5);
    insertElement(&head, 6);
    insertElement(&head, 7);
    insertElement(&head, 8);
    printList(head);
    removeDuplicates(head);
    printList(head);

    return 0;
}