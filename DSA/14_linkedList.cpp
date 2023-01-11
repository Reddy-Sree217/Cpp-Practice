#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    void printList(Node* n);
};

void Node::printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    head = new Node();
    second = new Node();
    third = new Node();

    (*head).data = 1;
    (*head).next = second;
    
    (*second).data = 11;
    (*second).next = third;

    third->data = 111;
    third->next = NULL;

    Node obj;
    obj.printList(head);
    

    return 0;
}