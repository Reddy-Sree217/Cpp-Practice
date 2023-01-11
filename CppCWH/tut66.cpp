#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>

class Base
{
    T1 var1;
    T2 var2;
public:

    Base(T1 x, T2 y)
    {
        var1 = x;
        var2 = y;
    }
    void display(void){
        cout<<"The value of var1 is: "<<var1<<endl
            <<"The value of var2 is: "<<var2<<endl;
    }
};

int main()
{
    // Base<> obj(1.3,3.1); //<int,float>
    Base<float,float> obj(1.3,3.1); //<float,float>
    obj.display();
    return 0;
}