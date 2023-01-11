#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    Base(int);
    Base() {}
    int data2;
    void setData(void);
    int getData1(void);
    int getData2(void);
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1(void)
{
    return data1;
}

int Base::getData2(void)
{
    return data2;
}

class Derived : public Base
{
    int data3 = 0;

public:
    void process(void);
    void display(void);
};

void Derived::process(void)
{
    data3 = data2 * getData1();
}

void Derived::display(void)
{
    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data2 is: " << data2 << endl;
    cout << "Value of data3 is: " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.display();
    der.process();
    cout << endl
         << endl;
    der.display();

    return 0;
}