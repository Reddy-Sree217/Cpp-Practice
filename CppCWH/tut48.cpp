#include <iostream>
using namespace std;

/*

class B:public A{

   Constructors Order of execution -> A(); and B();

};

class A:public B,public C{

    Constructors order of execution -> B(); and C(); then A();

};

class A:public B,virtual public C{

    Constructors order of execution -> C(); and B(); then A();

};

*/

class Base1
{
protected:
    int Base1_variable;

public:
    Base1(int x){
            Base1_variable = x;
    cout << "Base1 Constructor is called" << endl;
    }
};
class Base2
{
protected:
    int Base2_variable;

public:
    Base2(int x){
            Base2_variable = x;
    cout << "Base2 Constructor is called" << endl;

    }
};

class Derived1 : public Base1
{
protected:
    int derived1_variable1;
    int derived1_variable2;

public:
    Derived1(int x, int y,int z):Base1(x){
        Base1_variable = x;
        derived1_variable1 = y;
        derived1_variable2 = z;
    }
};

class Derived2 : public Base2, virtual public Base1
{
protected:
    int derived2_variable1;
    int derived2_variable2;

public:
    Derived2(int x,int y,int a,int b):Base1(x),Base2(y)
    {
        Base1_variable = x;
        Base2_variable = y;
        derived2_variable1 =a;
        derived2_variable2 =b;
        cout << "Derived2 class Constrictor is called" << endl;
    }
};

int main()
{
    Derived2 obj1(1,2,3,4);
    return 0;
}