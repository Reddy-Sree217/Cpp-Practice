#include <iostream>
using namespace std;

class number
{
    int num;

public:
    number(void);
    number(int);
    void display(void);
    number(number &);
};

number::number(void)
{
    num = 0;
}

number::number(int a){
    num = a;
}

number::number(number &a){
    num = a.num;
    cout<<"Copy Constructor!!"<<endl;
}

void number::display(void){
    cout<<"Number is: "<<num<<endl;
}

int main()
{
    number x,y,z(20),z10(z);        //Copy constructor is invoked (z10(z))
    x.display();
    y.display();
    z.display();
    number z1 = z;  //Copy constructor is invoked
    // z1.display();
    x=z;            //Copy constructor is not invoked
    // x.display();
    return 0;
}