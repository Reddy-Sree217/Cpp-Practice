#include <iostream>
using namespace std;

class Complex
{
protected:
    int real, imaginary;

public:
    void setData(int, int);
    void getData(void);
};

void Complex::setData(int i, int j)
{
    real = i;
    imaginary = j;
}

void Complex::getData(void)
{
    cout<<"Real is: "<<real<<endl<<"Imaginary is: "<<imaginary<<endl;
}


int main()
{
    Complex c1;

    Complex* ptr = &c1;

    // c1.setData(1,2);
    // c1.getData();
    (*ptr).setData(1,2);
    (*ptr).getData();

    Complex* p = new Complex;
    // (*p).setData(1,5);
    // (*p).getData();
    p->setData(1,5);    //Arrow Operator
    p->getData();

    return 0;
}