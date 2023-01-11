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

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        cout<<"No. Of Passes "<<i<<endl;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortMoreEfficient(int arr[], int size)
{
    int isSorted = 0;
    for (int i = 1; i < size; i++)
    {
        cout<<"No. Of Passes "<<i<<endl;
        isSorted = 1;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSorted = 0;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (isSorted)
            return;
    }
}

int main()
{
    int arr[] = {24, 18, 38, 43, 14, 40, 1, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    // bubbleSort(arr, size);
    bubbleSortMoreEfficient(arr, size);
    printArray(arr, size);
    return 0;
}