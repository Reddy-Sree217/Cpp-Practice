#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int, int);
    void getData();
    void sumOfComplex(complex, complex);
};

void complex::setData(int a1, int b1)
{
    a = a1;
    b = b1;
}

void complex::sumOfComplex(complex c1, complex c2)
{
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}

void complex::getData()
{
    cout << "Complex number is: " << a << " + i" << b << endl;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.getData();
    c2.setData(1, 2);
    c2.getData();
    c3.sumOfComplex(c1, c2);
    c3.getData();
    return 0;
}