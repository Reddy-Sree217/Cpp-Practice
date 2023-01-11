#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    complex(int);
    complex(int, int);
    void printComplex(void);
};

complex::complex(void)
{
    a = 0;
    b = 0;
}
complex::complex(int a1)
{
    a = a1;
    b = 0;
}

complex::complex(int a1, int b1)
{
    a = a1;
    b = b1;
}

void complex::printComplex(void)
{
    cout << "Complex number is: " << a << " + i" << b << endl;
}

int main()
{
    complex c1(4, 5);
    c1.printComplex();
    complex c2(4);
    c2.printComplex();
    return 0;
}