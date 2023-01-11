#include <iostream>
using namespace std;

class Base1
{
public:
    void Greet(void);
};

void Base1::Greet(void)
{
    cout << "Hi!" << endl;
}

class Base2
{
public:
    void Greet(void);
};

void Base2::Greet(void)
{
    cout << "Hello!" << endl;
}

class Base3
{
public:
    void Greet(void);
};

void Base3::Greet(void)
{
    cout << "Namaste" << endl;
}

class Derive : public Base1, public Base2, public Base3
{
public:
    void Greet(void);
};

void Derive::Greet(void)
{
    Base3::Greet(); // If greet is called it prints greet which is in class base3
}

class B
{
public:
    void say(void)
    {
        cout << "Hello world!" << endl;
    }
};

class D : public B
{
public:
    void say(void)
    {
        cout << "Hello worldddddddddddddddddddddddddd!" << endl;
    }
};

int main()
{

    Base1 base1obj;
    Base2 base2obj;
    Base3 base3obj;

    base1obj.Greet();
    base2obj.Greet();
    base3obj.Greet();

    Derive obj;
    obj.Greet();
    B b;
    b.say();
    D d;
    d.say(); // If derive class has the same function then it overwrites the function in base,, if function is not present in derived class then base class function is called
    return 0;
}