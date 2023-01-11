#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary = 10000.50;
    int langCode;
    Employee(int);
    Employee() {}
    void displaySalary(void);
};

Employee::Employee(int inpId)
{
    id = inpId;
}

void Employee::displaySalary(void)
{
    cout << "Salary of " << id << " is : " << salary << endl;
}

// Derived Class Syntax
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    members/methods/etc;
};
Default visibility mode is private
*/

class Programmer : public Employee
{
public:
    int langCode;
    Programmer(int, int);
    void getData(void)
    {
        cout << id <<endl<< langCode<<endl << salary << endl;
    }
};

Programmer::Programmer(int inpId, int inpLangCode)
{
    id = inpId;
    langCode = inpLangCode;
}

int main()
{
    Employee emp1(1), emp2(2);
    emp1.displaySalary();
    emp2.displaySalary();
    Programmer p1(10, 6);
    p1.getData();
    p1.displaySalary();
    return 0;
}