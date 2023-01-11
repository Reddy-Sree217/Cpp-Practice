#include <iostream>
using namespace std;

int func(int &num, int &pos)
{
    int temp = 1 << pos;
    cout << temp << endl;
    return (num & temp) ? 1 : 0;
}

int main()
{
    int num = 2;
    int pos = 2;
    cout << "Bit present in " << pos << "th position is: " << func(num, pos) << endl;
    return 0;
}