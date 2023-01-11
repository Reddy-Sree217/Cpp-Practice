#include <iostream>
using namespace std;
class c2;
class c1
{
    int value;
    friend void exchange(c1 &, c2 &);

public:
    void setValue(int);
    void printValue();
};

void c1::setValue(int data)
{
    value = data;
}

void c1::printValue()
{
    cout << "c1 Value is: " << value << endl;
}

class c2
{
    int value;
    friend void exchange(c1 &, c2 &);

public:
    void setValue(int);
    void printValue();
};

void c2::setValue(int data)
{
    value = data;
}
void c2::printValue()
{
    cout << "c2 Value is: " << value << endl;
}

void exchange(c1 &x, c2 &y)
// void exchange(c1 x, c2 y)
// If & is not mentioned then swapping of values will not happen bcoz x and y are just a copy of object a and b
// So actually to change the value of those objects we have pass the address of the objects
{
    int tmp = x.value;
    x.value = y.value;
    y.value = tmp;

    // cout<<x.value<<endl;
    // cout<<y.value<<endl;
}

int main()
{
    c1 a;
    c2 b;
    a.setValue(10);
    b.setValue(20);
    a.printValue();
    b.printValue();
    exchange(a, b);
    a.printValue();
    b.printValue();

    return 0;
}