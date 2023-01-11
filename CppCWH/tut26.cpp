#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void setComplex(int, int);
    void printComplex();

    friend complex sumComplex(complex, complex);
};

void complex::setComplex(int a1, int b1)
{
    a = a1;
    b = b1;
}
void complex::printComplex()
{
    cout << "Your complex number is: " << a << " + i" << b << endl;
}

complex sumComplex(complex c1, complex c2)
{
    complex c3;
    c3.setComplex((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    complex c1, c2;
    c1.setComplex(1, 4);
    c2.setComplex(5, 8);

    c1.printComplex();
    c2.printComplex();

    complex sum = sumComplex(c1, c2);
    sum.printComplex();
    return 0;
}