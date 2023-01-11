#include<iostream>
#include<stack>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
};

bool isFull(Node *top)
{
    Node *p = new Node();
    if (p == NULL)
        return true;

    return false;
}

bool isEmpty(Node *top)
{
    if (top == NULL)
        return true;
    return false;
}

void push(Node **top, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

char pop(Node **top)
{
    Node *p = *top;
    int val = p->data;
    *top = (*top)->next;
    delete p;
    return val;
}

int stackTop(Node* top){
    if(isEmpty(top))
        return -1;
    return top->data;
}

bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

int precedence(char c){
    if(c == '+' || c == '-')
        return 1;
    
    else if(c == '*' || c == '/')
        return 2;

    return 0;
}

string infixTopostfix(string infix){
    string postfix;
    Node* top;
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix += infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i]) > precedence(stackTop(top))){
                push(&top,infix[i]);
                i++;
            }
            else{
                postfix += pop(&top);
                // st.pop();
                j++;
            }
        }
    }
    while(!isEmpty(top)){
        postfix += pop(&top);
        // st.pop();
        j++;
    }
    return postfix;
}


int main(){
    string infix = "a+b";
    // cout<<infix<<endl;
    cout<<infixTopostfix(infix)<<endl;
    return 0;
}