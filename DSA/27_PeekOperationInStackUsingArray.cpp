#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};

bool isFull(stack *s)
{
    if (s->top == s->size - 1)
        return true;
    return false;
}

bool isEmpty(stack *s)
{
    if (s->top == - 1)
        return true;
    return false;
}

void push(stack* s,int val){
    if(isFull(s)){
        cout<<"Stack OverFlow"<<endl;
        return;
    }
    s->top++;
    s->arr[s->top] = val;
}

int pop(stack*s){
    int val;
    if(isEmpty(s)){
        cout<<"Stack UnderFlow"<<endl;
        return -1;
    }
    val = s->arr[s->top];
    s->top--;
    return val;
}

int peek(stack*s,int pos){
    if(s->top-pos+1<0){
        cout<<"Invalid Position"<<endl;
        return -1;
    }
    return s->arr[s->top-pos+1];
}


int main()
{
    stack *s = new stack();
    s->size = 4;
    s->top = -1;
    s->arr = new int(s->size);
    // cout<<isEmpty(s)<<endl;
    // cout<<isFull(s)<<endl;
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    // cout<<isFull(s)<<endl;
    // cout<<pop(s)<<endl;
    pop(s);
    // cout<<isEmpty(s)<<endl;
    cout<<peek(s,1);
    return 0;
}