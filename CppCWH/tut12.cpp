#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    // * is a dereferencing operator
    // & gives the address of a variable
    int *ptr;
    ptr = &a;
    cout << *ptr << endl; // Value present at the address
    cout << ptr << endl;  // address value stored in ptr
    cout << &a << endl;   // address of variable a
    cout << &ptr << endl; // address of ptr

    cout<<"\n";
    int **ptr2;
    ptr2=&ptr;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;
    
    int ***ptr3;
    ptr3=&ptr2;

    cout<<ptr3<<endl;
    cout<<***ptr3<<endl;

    return 0;
}