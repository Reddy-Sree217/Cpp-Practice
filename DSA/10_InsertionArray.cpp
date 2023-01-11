#include <iostream>
using namespace std;

void setArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 50;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << "  " << arr[i] << endl;
    }
}
void insertElementInArray(int arr[], int sizeOfArray, int element, int pos)
{
    if (pos > sizeOfArray)
    {
        cout << "Insertion not possible!" << endl;
        printArray(arr,sizeOfArray);
        exit(0);
    }
    else
    {
        for (int i = sizeOfArray; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        cout<<"Insertion successful!"<<endl;
    }
}

int main()
{
    int arr[100];
    cout << "Enter the no. elements in array" << endl;
    int sizeOfArray;
    cin >> sizeOfArray;
    if(sizeOfArray>100){
        cout<<"Enter a valid size of array!"<<endl;
        exit(0);
    }
    setArray(arr, sizeOfArray);
    printArray(arr, sizeOfArray);
    cout << "Enter the value and position of the element to be inserted" << endl;
    int element, pos;
    cin >> pos;
    cin >> element;
    insertElementInArray(arr, sizeOfArray, element, pos);
    sizeOfArray++;
    cout << endl
         << "After insertion" << endl;
    printArray(arr, sizeOfArray);
    return 0;
}