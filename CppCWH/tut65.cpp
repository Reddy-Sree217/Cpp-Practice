#include <iostream>
using namespace std;

template<class T1,class T2>

class Base
{
public:
    T1 var1;
    T2 var2;
    Base(T1 var1, T2 var2)
    {
        this->var1 = var1;
        this->var2 = var2;
    }
    void display(void)
    {
        cout << var1 << endl
             << var2;
    }
};

int main()
{
    Base<float,int> obj(1.5,23);
    obj.display();
    return 0;
}