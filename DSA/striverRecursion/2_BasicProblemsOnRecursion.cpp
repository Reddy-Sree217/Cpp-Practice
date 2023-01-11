#include <iostream>
using namespace std;

int p1 = 0;

void problem1(void)
{
    if (p1 == 5)
        return;
    cout << "Sree" << endl;
    p1++;
    problem1();
}

int p2 = 1;
void problem2(void)
{
    if (p2 > 20)
        return;
    cout << p2 << endl;
    p2++;
    problem2();
}

int p3 = 20;
void problem3(void)
{
    if (p3 <= 0)
        return;
    cout << p3 << endl;
    p3--;
    problem3();
}

void problem4(int i)
{
    if (i <= 0)
        return;
    problem4(i - 1);
    cout << i << endl;
}

void problem5(int i)
{
    if (i > 10)
        return;
    problem5(i + 1);
    cout << i << endl;
}

int main(int argc, char const *argv[])
{
    // problem1();
    // problem2();
    // problem3();
    // problem4(5);
    problem5(1);
    return 0;
}
