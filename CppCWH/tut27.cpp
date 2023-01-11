#include <iostream>
using namespace std;

class complex; // Forward Declaration
class calculator
{
public:
    int sum(int, int);
    int sumRealComplex(complex, complex);
    int sumImagComplex(complex, complex);
};

class complex
{
    int a, b;

public:
    // friend int calculator::sumRealComplex(complex,complex);
    // friend int calculator::sumImagComplex(complex,complex);
    friend class calculator; // This can also be written
    void setComplex(int, int);
    void printComplex();
};

void complex::setComplex(int a1, int b1)
{
    a = a1;
    b = b1;
}

void complex::printComplex()
{
    cout << "Complex Number is : " << a << " + " << b << "i" << endl;
}

int calculator::sumRealComplex(complex c1, complex c2)
{
    return c1.a + c2.a;
}
int calculator::sumImagComplex(complex c1, complex c2)
{
    return c1.b + c2.b;
}

int main()
{
    complex c1, c2;
    c1.setComplex(1, 2);
    c2.setComplex(10, 2);
    // c1.printComplex();
    calculator C;
    int sumReal = C.sumRealComplex(c1, c2);
    int sumImag = C.sumImagComplex(c1, c2);
    cout << "Real Part is: " << sumReal << endl;
    cout << "Imaginary part is: " << sumImag << endl;
    return 0;
}
