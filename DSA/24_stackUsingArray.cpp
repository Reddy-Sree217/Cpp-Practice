#include<iostream>
using namespace std;


class stack{
    public:
        int size;
        int top;
        int *arr;
};

int isEmpty(stack* ptr){
    if(ptr->top == -1)
        return 1;
    return 0;
}

int isFull(stack* ptr){
    if(ptr->top == ptr->size-1)
        return 1;
    return 0;
}


int main(){
    stack *s = new stack();
    s->size = 5;
    s->top = -1;
    s->arr = new int(s->size);

    s->arr[s->top+1] = 7;
    s->top++;
    
    s->arr[s->top+1] = 7;
    s->top++;

    s->arr[s->top+1] = 7;
    s->top++;
    
    s->arr[s->top+1] = 7;
    s->top++;
    
    s->arr[s->top+1] = 7;
    s->top++;

    int emp = isEmpty(s);
    if(emp){
        cout<<"Stack is Empty"<<endl;
    }
    else
        cout<<"Stack is not empty"<<endl;

    int full = isFull(s);
    if(full){
        cout<<"Stack is Full"<<endl;
    }
    else
        cout<<"Stack is not Full"<<endl;
    return 0;
}