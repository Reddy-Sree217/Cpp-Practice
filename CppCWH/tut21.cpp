#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int x, y, z;

    void setData(int, int, int);
    void getData();
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
void Employee::getData()
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}
int main()
{
    Employee emp1;
    emp1.x = 4;
    emp1.y = 5;
    emp1.z = 6;
    // emp1.a = 10; // Throws error bcoz emp1.a is a is decalared as private variable, it can be accessed throw a function as setData written in the same class
    emp1.setData(1, 2, 3);
    emp1.getData();
    return 0;
}