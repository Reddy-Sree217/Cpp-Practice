#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 | n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int fib(int n)
{
    if (n == 1 | n == 0)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Factorial of " << num << " is :" << factorial(num) << endl;
    cout << "Fibonacci value at position " << num << " is :" << fib(num) << endl;

    return 0;
}