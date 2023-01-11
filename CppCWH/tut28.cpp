#include <iostream>
using namespace std;
class Y;
class X
{
    int data;
friend void sum(X,Y);
public:
    void setData(int);
};

void X::setData(int value)
{
    data = value;
}

class Y{
    int data;
friend void sum(X,Y);
    public:
    void setData(int);
};

void Y::setData(int value){
    data = value;
}


void sum(X o1,Y o2){
    cout<<"Sum of X_data and Y_data is: "<<o1.data+o2.data;
}


int main()
{
    X o1;
    Y o2;
    o1.setData(10);
    o2.setData(30);
    sum(o1,o2);
    return 0;
}