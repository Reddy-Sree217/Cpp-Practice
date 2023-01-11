#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

bool isEmpty(Node* top){
    if(top == NULL)
        return true;
    return false;
}

bool isFull(Node* top){
    Node* n = new Node();
    if(n==NULL)
        return true;
    return false;
}
void push(Node** top,int value){
    if(isFull(*top)){
        cout<<"OverFlow"<<endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

int pop(Node** top){
    if(isEmpty(*top)){
        cout<<"UnderFlow"<<endl;
        return -1;
    }
    Node* p = *top;
    *top = (*top)->next;
    int x = p->data;
    delete p;
    return x;
}


void display(Node* top){
    Node* p = top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    Node* top = NULL;
    // cout<<isEmpty(top);
    push(&top,1);
    push(&top,11);
    push(&top,111);
    push(&top,1111);
    push(&top,11111);
    pop(&top);
    display(top);
    // display(top);
    // cout<<isFull(top);
    return 0;
}