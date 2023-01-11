#include <iostream>
using namespace std;

void fun(int n)
{
    int i = 0;
    if (n > 1)
    {
        fun(n - 1);
    }
        for (i = 0; i < n; i++)
        {
            cout << " * ";
        }
    cout<<endl;
    // return;
}

int main()
{
    fun(3);
    return 0;
}