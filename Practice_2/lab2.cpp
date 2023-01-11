#include <iostream>
using namespace std;
int main()
{
    cout << "*********************************" << endl;
    cout << "Name: Sreenivasulu Reddy.K" << endl;
    cout << "Roll: S20190020217" << endl;
    cout << "Branch: ECE" << endl;
    cout << "*********************************" << endl;

    cout << "\n";

    int dis;
    cout << "Enter the distance(met): " << endl;
    cin >> dis;
    cout << "Distance in cm is: " << dis * 100 << endl;
    cout << "\n";

    int length = 0, width = 0;
    cout << "Enter the length of the ractangle: " << endl;
    cin >> length;

    cout << "Enter the width of the ractangle: " << endl;
    cin >> width;
    cout << "Area of the rectangle of length " << length << " and width " << width << " is: " << length * width << endl;
    cout << "\n";

    int a = 0, b = 0;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << " a+b = " << a + b << endl;
    cout << " a-b = " << a - b << endl;
    cout << " a*b = " << a * b << endl;
    cout << " a/b = " << a / b << endl;
    cout << " a%b = " << a % b << endl;
    cout << "\n";
    int x = 0, y = 0, z = 0;
    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Enter the value of y: " << endl;
    cin >> y;
    cout << "Enter the value of z: " << endl;
    cin >> z;
    float value;
    value=((((2*x+4*y)/2)+3)*z-((4*z-6*y)/2)*x);
    cout<<value<<endl;
    return 0;
}