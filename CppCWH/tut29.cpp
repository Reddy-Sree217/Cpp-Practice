#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // Deafult Constructor
    void printComplex(void);
    void setComplex(int, int);
};

complex::complex(void)
{
    a = 0;
    b = 0;
}

void complex::printComplex()
{
    cout << "Complex Number is : " << a << " + " << b << "i" << endl;
}
void complex::setComplex(int a1, int b1)
{
    a=a1;
    b=b1;
}

int main()
{
    complex c1;
    c1.printComplex();
    c1.setComplex(1,2);
    c1.printComplex();
    return 0;
}