#include <iostream>
#include<iomanip>  //Header file of manipulator
using namespace std;
int main()
{
    // *********************************************************
    int a = 34;
    cout << "The value of a was: " << a << endl;
    a = 45;
    cout << "The value of a is: " << a << endl;
    // *********************************************************

    // *********************************************************
    //To make a variable constant i.e, it cannot be changed later on then
    // const int b = 10;
    // cout << "The value of a was: " << b << endl;
    // b=25;  // Throws an error
    // cout << "The value of a is: " << b << endl;
    // *********************************************************
    int x=3,y=33,z=3333;
    cout<<"Value of x without setw manipulator is: "<<x<<endl;
    cout<<"Value of y without setw manipulator is: "<<y<<endl;
    cout<<"Value of z without setw manipulator is: "<<z<<endl;
    cout<<"Value of x with setw manipulator is: "<<setw(4)<<x<<endl;
    cout<<"Value of y with setw manipulator is: "<<setw(4)<<y<<endl;  //setw(4) is a manipulator
    cout<<"Value of z with setw manipulator is: "<<setw(4)<<z<<endl;

    return 0;
}