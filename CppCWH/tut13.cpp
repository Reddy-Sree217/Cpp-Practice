#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {50, 60, 70, 80, 90};
    // cout<<marks[2]<<endl;
    // cout<<marks[0+1]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }
    // i = 0;
    // do
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // } while (i < 4);
    cout << "\n";
    int *ptr;
    ptr = marks;
    cout << *ptr << endl;
    // ptr++;
    cout<<*(ptr+1)<<endl;
    return 0;
}