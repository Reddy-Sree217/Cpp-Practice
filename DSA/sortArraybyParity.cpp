#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 1, 3, 4, 2, 1, 3, 4, 2, 1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (arr[start] % 2 != 0 && arr[end] % 2 == 0)
            swap(arr[start], arr[end]);
        else if (arr[start] % 2 == 0)
            start++;
        else
            end--;
    }
    printArray(arr, size);
    return 0;
}