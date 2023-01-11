#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num <= 1)
        return 1;
    return num * factorial(num - 1);
}

void printArray(int arr[], int size)
{
    if (size < 0)
        return;
    cout << arr[size] << " ";
    printArray(arr, size - 1);
}

int main(int argc, char const *argv[])
{
    int num = 3;
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 4);
    // cout << factorial(num);
    return 0;
}
