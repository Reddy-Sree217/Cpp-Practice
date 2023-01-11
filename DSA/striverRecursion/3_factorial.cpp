#include <iostream>
using namespace std;

double fact(int n)
{
    if (n == 0)
        return 1;

    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n = 5;
    cout << fact(n) << endl;
}