#include <iostream>
using namespace std;
int d = 100;
int main(int argc, char const *argv[])
{
    // int a,b,c,d;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // cout<<"Enter the value of c: "<<endl;
    // cin>>c;
    // // cout<<a<<"\n"<<b<<"\n"<<c;
    // d=a+b+c;
    // cout<<"Sum of a+b+c=d is : "<<d<<endl;
    // cout<<"Global value of d is : "<<d<<endl;  //Local variable d is overwriting global value of d
    // cout<<"Global value of d is : "<<::d<<endl;  //global value of d will be printed if :: is used
    // cout<<"\n";

    float f = 34.4f;
    long double ld = 34.4l;
    cout << "Value of f is: " << f << endl;
    cout << "Value of ld is: " << ld << endl;
    cout << "\n";

    // ****************Reference Variables*************
    float x = 503.5f;
    float &y = x;

    cout << "Value of x is: " << x << endl;
    cout << "Value of y is: " << y << endl;

    // ****************Type Casting*************

    float t_cast = 8.592f;

    cout << "Value of t_cast after type casting into int is : " << (int)t_cast << endl;
    //Both are same
    // cout<<"Value of t_cast after type casting into int is : "<<int(t_cast)<<endl;
    return 0;
}
