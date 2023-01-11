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
    int isSorted = 0;
    for (int i = 1; i < size; i++)
    {
        isSorted = 1;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSorted = 0;
            }
        }
        if (isSorted)
            return;
    }
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int min_index = i;
        int min = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main()
{
    int arr[] = {2, 1, 5, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    selectionSort(arr, size);
    // bubbleSort(arr, size);
    // insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}