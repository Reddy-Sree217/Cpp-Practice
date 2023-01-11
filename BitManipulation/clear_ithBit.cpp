#include <iostream>
using namespace std;
int main()
{
    int num = 7;
    int pos = 2;
    cout << num << endl;
    int mask = 1 << pos;
    mask = ~mask;
    num = num & mask;
    cout << num << endl;
    return 0;
}