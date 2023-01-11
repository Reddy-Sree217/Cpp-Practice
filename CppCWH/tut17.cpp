#include <iostream>
using namespace std;

// Inline function is used to reduce computational time   but not recommended to use in all function cases
// inline int product(int a, int b)
// {
//     return a * b;
// }

int product(int a, int b)
{
    static int c = 0; // only one time executed
    c = c + 1;        // in the next iteration c will be initialised as 1
    return a * b + c;
}

float updatedMoney(int money, float factor = 1.2)
{
    return money * factor;
}

int main()
{
    int a, b;
    // cout << "Enter a and b values: " << endl;
    // cin >> a >> b;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;
    // cout << "Product of a and b is: " << product(a, b) << endl;

    int money = 300000;
    cout << "Balance after 1 year: " << updatedMoney(money) << endl;  //deafult factor will be taken
    cout << "Balance after 1 year if factor is 1.5: " << updatedMoney(money,1.5) << endl; //factor value is overrided with 1.5

    return 0;
}