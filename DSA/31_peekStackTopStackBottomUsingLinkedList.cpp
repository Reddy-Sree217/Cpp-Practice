#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
};

void push(Node** top,int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

void printStack(Node* top){
    Node* p = top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


bool isEmpty(Node* top){
    if(top == NULL)
        return true;
    return false;
}


bool isFull(Node* top){
    Node* tmp = new Node();
    if(tmp == NULL)
        return true;
    return false;
}

int peek(Node* top,int position){
    Node* p = top;
    for(int i=1;i<position;i++){
        if(p->next == NULL){
            cout<<"Invalid Position"<<endl;
            return -1;
        }
        p = p->next;
    }
    return p->data;
}

int stackTop(Node* top){
    if(isEmpty(top))
        return -1;
    return top->data;
}


int stackBottom(Node* top){
    if(isEmpty(top))
        return -1;
    Node* p = top;
    while(p->next!=NULL){
        p = p->next;
    }
    return p->data;
}

int main(){
    Node* top = NULL;
    // push(&top,11);
    push(&top,1);
    push(&top,2);
    push(&top,3);
    push(&top,4);
    // push(&top,4);
    // push(&top,4);
    push(&top,5);
    push(&top,6);
    // push(&top,6);
    printStack(top);
    cout<<peek(top,2)<<endl;
    cout<<stackTop(top)<<endl;
    cout<<stackBottom(top)<<endl;
    return 0;
}