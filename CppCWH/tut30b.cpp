#include <iostream>
#include<cmath>
using namespace std;

class point
{
    int x, y;

public:
    friend void computeDistance(point, point);
    point(void);
    point(int, int);
    void printPoint(void);
};

point::point(void)
{
    x = 0;
    y = 0;
}

point::point(int a, int b)
{
    x = a;
    y = b;
}

void computeDistance(point p1, point p2)
{
    double d;
    d = (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);
    cout << "Distance is: " << sqrt(d) << endl;
}

void point::printPoint(void)
{
    cout << "Point is (" << x << " , " << y << ")" << endl;
}

int main()
{
    point p1(4, 5);
    p1.printPoint();

    point p2(9, 3);
    p2.printPoint();
    computeDistance(p1,p2);
    return 0;
}