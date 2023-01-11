#include <iostream>
using namespace std;

void countSort(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        max = (max > arr[i]) ? max : arr[i];
    }
    // cout<<max<<endl;
    int newArray[max + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        newArray[arr[i]] += 1;
    }
    int j = 0;
    for (int i = 0; i < max + 1; i++)
    {
        int temp = newArray[i];
        while (temp > 0)
        {
            arr[j] = i;
            j++;
            temp--;
        }
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
    int arr[] = {2, 4, 1, 5, 1};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    countSort(arr, size);
    printArray(arr, size);
    return 0;
}