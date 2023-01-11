#include <iostream>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
};

bool isEmpty(Node *top)
{
    if (top == NULL)
        return true;
    return false;
}

void push(Node **top, char value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

bool pop(Node **top)
{
    Node *p = *top;
    if (isEmpty(*top))
    {
        return true;
    }
    char c = p->data;
    *top = (*top)->next;
    delete p;
    return false;
}

void display(Node *top)
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    Node *top = NULL;
    // cout<<isEmpty(top)<<endl;

    // cout<<isEmpty(top)<<endl;
    // display(top);

    string s = "((3+(4)";
    char ch;
    for (int i = 0; i < s.size(); i++)
    {
        ch = s[i];
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            push(&top, s[i]);
        }
        if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            ch = pop(&top);
            if (ch)
            {
                cout << "Not Matched" << endl;
                // exit(0);
                return 0;
            }
        }
    }
    if (isEmpty(top))
    {
        cout << "Matched" << endl;
    }
    else
    {
        cout << "Not Matched" << endl;
    }
    return 0;
}