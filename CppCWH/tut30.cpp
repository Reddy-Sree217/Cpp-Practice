#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);      //Default constructor
    complex(int,int);  //Parameterized constructor
    void printComplex(void);
};

complex::complex(void)
{
    a = 0;
    b = 0;
}
complex::complex(int a1,int b1){
    a=a1;
    b=b1;
}

void complex::printComplex(void)
{
    cout << "Complex Number is: " << a << " + " << b << "i" << endl;
}

int main()
{
    complex c1;
    complex c2(4,5); // This can be also called as complex c2=complex(4,5);
    // complex c2=complex(4,5);
    c1.printComplex();
    c2.printComplex();
    return 0;
}