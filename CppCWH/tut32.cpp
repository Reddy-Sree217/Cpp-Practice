#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int, int, int);
    void printData(void);
};

simple::simple(int a, int b, int c = 10)
{
    data1 = a;
    data2 = b;
    data3 = c;
}

void simple::printData(void)
{
    cout << data1 << endl;
    cout << data2 << endl;
    cout << data3 << endl;
}

int main()
{
    simple s(1, 2); // Default value is stored in data3 variable
    s.printData();
    simple s1(1, 2, 3);
    s1.printData();
    return 0;
}