#include <iostream>
using namespace std;

int main()
{
    int A =23;
    int B = 11;

    int num = A ^ B;
    cout << num << endl;
    int count = 0;
    while (num)
    {
        count++;
        num = num & (num - 1);
    }
    cout << count << endl;
    return 0;
}