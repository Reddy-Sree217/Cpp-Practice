#include <iostream>
using namespace std;

class Base
{
public:
    int baseVar;
    void display(void)
    {
        cout << "Base Variable Value is: " << baseVar << endl;
    }
};

class Derived : public Base
{
public:
    int derivedVar;
    void display(void)
    {
        cout << "Base Variable Value is: " << baseVar << endl;
        cout << "Derived Variable Value is: " << derivedVar << endl;
    }
};

int main()
{
    Base *base_obj_pointer;
    Base obj1;
    Derived *derived_obj_pointer;
    Derived obj2;
    base_obj_pointer = &obj2;   //Access to only base class Members
    base_obj_pointer->baseVar = 100;
    // base_obj_pointer->derivedVar = 1000; // Throws error because although base_obj_pointer is pointing to object of derived class, pointer is of base class type so only members of base class is acceessible
    base_obj_pointer->display();

    // derived_obj_pointer = &obj1; //Throws Error
    derived_obj_pointer = &obj2;    //Access to both base class and derived class members
    derived_obj_pointer->derivedVar=1000;
    derived_obj_pointer->display();

    return 0;
}