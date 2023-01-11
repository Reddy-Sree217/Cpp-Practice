// There are two types of header files
// 1. System Header Files: These header files comes with the compiler(built in)
// Ex:
#include <iostream>
// 2. User defined header files: Written by Programmer
// Ex:
// # include "this.h"  --> this.h file should be there in the current directory else throws an error
using namespace std;

int main()
{
    int a = 10, b = 2;
    cout << "This is Tut-6" << endl; //endl --> new line (\n)
    cout << "Operators" << endl;
    // 1.Arithmetic Operators:
    cout << "1.Arithmetic Operators:" << endl;
    cout << "Value of a+b is: " << a + b << endl;
    cout << "Value of a-b is: " << a - b << endl;
    cout << "Value of a*b is: " << a * b << endl;
    cout << "Value of a/b is: " << a / b << endl;
    cout << "Value of a%b is: " << a % b << endl;
    cout << "Value of a++ is: " << a++ << endl;
    cout << "Value of a-- is: " << a-- << endl;
    cout << "Value of ++a is: " << ++a << endl;
    cout << "Value of --a is: " << --a << endl;
    // 2.Assignment Operators
    cout << "2.Assignment Operators " << endl;
    // Assignment Operators are used to assign values to the variables
    cout << "Assignment Operators are used to assign values to the variables" << endl;
    int c = 25;
    float f = 2.547;
    char d = 'c';
    cout << "3.Comparision Operators " << endl;
    cout << "Value of a==b is: " << (a == b) << endl;
    cout << "Value of a!=b is: " << (a != b) << endl;
    cout << "Value of a<=b is: " << (a <= b) << endl;
    cout << "Value of a>=b is: " << (a >= b) << endl;
    cout << "Value of a<b is: " << (a < b) << endl;
    cout << "Value of a>b is: " << (a > b) << endl;
    cout << endl;
    cout << "4.Logical Operators " << endl;
    cout << "Value of ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "Value of ((a==b) || (a<b)) is: " << ((a == b) || (a > b)) << endl;
    cout << (a & b);
    cout << endl;
    cout << (a | b);

    return 0;
}