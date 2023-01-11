#include <iostream>
#include <stack>
using namespace std;

void printArray(int[], int);
void nextGreaterElementusingStack(int arr[], int size)
{
    stack<int> s;
    int newArray[size] = {0};
    for (int i = size - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            newArray[i] = -1;
        else
            newArray[i] = s.top();
        s.push(arr[i]);
    }
}

void nextGreaterElementIndexusingStack(int arr[], int size)
{
    stack<int> s;
    int newArray[size] = {0};
    for (int i = size - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            newArray[i] = -1;
        else
            newArray[i] = s.top() - i;
        s.push(i);
    }
}

void prevSmallerElementIndexusingStack(int arr[], int size)
{
    stack<int> s;
    int newArray[size] = {0};
    for (int i = 0; i < size; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
            newArray[i] = -1;
        else
            newArray[i] = i - s.top();
        s.push(i);
    }
    printArray(newArray, size);
}

void nextSmallerElementIndexusingStack(int arr[], int size)
{
    stack<int> s;
    int newArray[size] = {0};
    for (int i = size - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] > arr[i])
        {
            s.pop();
        }
        if (s.empty())
            newArray[i] = -1;
        else
            newArray[i] = s.top() - i;
        s.push(i);
    }
    printArray(newArray, size);
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
    int arr[] = {2,1,5,6,2,3};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    nextGreaterElementIndexusingStack(arr, size);
    // nextGreaterElementusingStack(arr, size);
    nextSmallerElementIndexusingStack(arr, size);
    prevSmallerElementIndexusingStack(arr, size);
    return 0;
}