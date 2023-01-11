#include <iostream>
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

void printStack(Node *top)
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int match(char a,char b){
    if(a == '{' && b == '}')
        return 1;
    
    if(a == '(' && b == ')')
        return 1;
    
    if(a == '[' && b == ']')
        return 1;
    return 0;
}

int parenthesisChecker(string s)
{
    char ch;
    Node *top = NULL;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            push(&top, s[i]);
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (isEmpty(top))
                return 0;
            ch = pop(&top);
            if(!match(ch,s[i])){
                return 0;
            }
        }
    }
    if (isEmpty(top))
        return 1;
    return 0;
}

int main()
{

    string exp = "{2+([3*4]/[1+2])*10}";
    if (parenthesisChecker(exp))
        cout << "Parenthesis Matching" << endl;
    else
        cout << "Parenthesis Not Matching" << endl;
    return 0;
}