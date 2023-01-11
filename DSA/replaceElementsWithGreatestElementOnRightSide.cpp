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
    int arr[] = {17, 18, 5, 4, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size - 1; i++)
    // {
    //     int maxi = -1;
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         maxi = max(maxi, arr[j]);
    //     }
    //     arr[i] = maxi;
    // }
    // arr[size - 1] = -1;
    int maxi = -1;
    for (int i = size - 1; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = maxi;
        maxi = max(temp, maxi);
    }
    printArray(arr, size);
    return 0;
}