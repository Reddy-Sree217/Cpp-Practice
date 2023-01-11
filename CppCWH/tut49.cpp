#include <iostream>
using namespace std;

class Base
{
protected:
    int a;
    int b;
    public:
    // Base();
    Base(int,int);
};

Base::Base(int i,int j):a(i),b(j){
    cout<<"Constructor is Called"<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
}



int main()
{
    Base base(1,2);
    return 0;
}