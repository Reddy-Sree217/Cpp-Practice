#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "Before Setting: " << num << endl;
    int pos = 1;
    int mask = 1 << pos;
    num = num | mask;
    cout << "After setting: " << num << endl;
    return 0;
}