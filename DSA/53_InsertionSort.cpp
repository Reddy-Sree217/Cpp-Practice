#include <iostream>
using namespace std;

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
                isSorted = 0;
                swap(arr[j], arr[j + 1]);
            }

            if (isSorted)
                return;
        }
    }
}

void insertionSort(int arr[],int size){
    int temp = 0;
    for(int i=1;i<size;i++){
        temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

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
    int arr[5] = {2, 1, 5, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    bubbleSort(arr, size);
    // printArray(arr, size);
    // insertionSort(arr,size);
    printArray(arr, size);

    return 0;
}