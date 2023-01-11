// GFG
// https://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/


#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
};

void insertNode(Node** head,int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

int CountNumberOfOccurance(Node* head , int value){
    Node* p = head;
    int count = 0;
    if(head == NULL){
        return count;
    }
    while(p!=NULL){
        if(p->data == value)
        count++;
    p=p->next;
    }
    return count;
}

void printList(Node* head){
    Node* p = head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;

    insertNode(&head,6);
    insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    // insertNode(&head,5);
    insertNode(&head,4);
    insertNode(&head,3);
    insertNode(&head,2);
    insertNode(&head,1);
    insertNode(&head,0);

    printList(head);

    int count = CountNumberOfOccurance(head,5);
    cout<<count<<endl;
    return 0;
}