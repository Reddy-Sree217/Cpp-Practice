#include <iostream>
using namespace std;

int main()
{
    int n = 2100;
    if (n % 100 == 0 && n % 400 != 0)
        cout << "Hi" << endl;
    else if (n % 4 == 0)
        cout << "Hello" << endl;
}