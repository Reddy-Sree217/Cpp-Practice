#include <iostream>
using namespace std;

int main()
{
    int num = 21;
    double numDouble = 23.33;
    char character = 'c';
    string name = "Sree";
    bool value = false;
    cout << "My name is " << name << " and my age is " << num << endl;
    ;

    const float pi = 3.14;
    cout<<pi<<endl<<"Changing pi value throws error bcoz declared as constant"<<endl;
    // pi = 6.28;
    // cout<<pi<<endl;  //Throws error because pi is declared as constant and thus cannot be overwritten

    // int k;
    // cout<<"Enter the number"<<endl;
    // cin>>k;
    // cout<<"Entered number is: "<<k<<endl;

    // double PI;
    // PI = 22/7;
    // cout<<(double)PI<<endl;

    // double val = 10;
    double val;
    val = (22.0/7.0);
    cout<<val<<endl;


    float f1 = 23e4;
    double f2 = 32E5;
    cout<<f1<<endl<<f2<<endl;

    char a = 'A';
    cout<<(int)a<<endl;

    return 0;
}