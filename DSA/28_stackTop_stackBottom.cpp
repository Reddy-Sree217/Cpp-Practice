#include<iostream>
using namespace std;

class stack{
    public:
        int size;
        int top;
        int* arr;
};

bool isEmpty(stack* s){
    if(s->top == -1){
        return true;
    }
    return false;
}

bool isFull(stack* s){
    if(s->top == s->size - 1){
        return true;
    }
    return false;
}

void push(stack* s,int value){
    if(isFull(s)){
        cout<<"Stack OverFlow"<<endl;
        return;
    }
    s->top++;
    s->arr[s->top] = value;
}

int pop(stack* s){
    if(isEmpty(s)){
        cout<<"Stack UnderFlow"<<endl;
        return -1;
    }
    int ret = s->arr[s->top];
    s->top--;
    return ret;
}

int stackTop(stack* s){
    if(isEmpty(s)){
        return -1;
    }
    return s->arr[s->top];
}
int stackBottom(stack* s){
    if(isEmpty(s)){
        return -1;
    }
    return s->arr[0];
}

int peek(stack* s,int pos){
    if(s->top-pos+1<0){
        cout<<"Invalid position"<<endl;
        return -1;
    }
    return s->arr[s->top-pos+1];
}

int main(){
    stack* s = new stack();
    s->top = -1;
    s->size = 5;
    s->arr = new int(s->size);
    // cout<<isEmpty(s)<<endl;
    // cout<<isFull(s)<<endl;
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,33);
    // cout<<isEmpty(s)<<endl;
    // cout<<isFull(s)<<endl;
    // cout<<pop(s)<<endl; 
    // cout<<pop(s)<<endl; 
    // cout<<pop(s)<<endl; 
    // cout<<pop(s)<<endl; 
    cout<<stackTop(s)<<endl;
    cout<<stackBottom(s)<<endl;

    cout<<peek(s,4)<<endl;

    // cout<<pop(s)<<endl;
    // cout<<pop(s)<<endl;
    // cout<<pop(s)<<endl;
    return 0;
}