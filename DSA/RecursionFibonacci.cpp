// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if (n == 0)
//         return 0;

//     if (n == 1 || n == 2)
//         return 1;
//     return (fib(n-1)+fib(n-2));
// }

// int main(int argc, char const *argv[])
// {
//     int n = 7;
//     cout << fib(n);
//     return 0;
// }



#include <iostream>
using namespace std;

int dec_bin(int n)
{
    if (n == 0)
        return 0;
    dec_bin(n/2);
    cout<<n%2<<" ";
    return 0;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    cout << dec_bin(n);
    return 0;
}
