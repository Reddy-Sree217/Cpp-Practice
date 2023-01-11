#include <iostream>
using namespace std;

class Base
{
protected:
    int num1;
    int num2;

public:
    Base &setData(int, int);
    // {
    //     this->num1 = num1;
    //     this->num2 = num2;
    //     return *this;
    // }
    void getData(void);
};

Base &Base::setData(int num1,int num2){
    this->num1 = num1;
    this->num2 = num2;
    return *this;
}

void Base::getData(void)
{
    cout << num1 << endl
         << num2 << endl;
}

int main()
{
    Base obj;
    obj.setData(1, 2).getData();
    // obj.getData();
    return 0;
}