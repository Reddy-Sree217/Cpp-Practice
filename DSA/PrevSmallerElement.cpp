#include <iostream>
#include <stack>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void prevSmallerElementBruteForce(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        int j = i - 1;
        int flag = 1;
        while (j >= 0)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                flag = 0;
                break;
            }
            j--;
        }
        if (flag)
            arr[i] = -1;
        // arr[i] = arr[j];
    }
    arr[0] = -1;
}

void prevSmallerElementusingStack(int arr[], int size)
{
    stack<int> s;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        while (!s.empty() && s.top() > arr[i])
        {
            s.pop();
        }
        if (s.empty())
            arr[i] = -1;
        else
            arr[i] = s.top();
        s.push(temp);
    }
}

void nextSmallerElementusingStack(int arr[], int size)
{
    stack<int> s;
    for (int i = size - 1; i >= 0; i--)
    {
        int temp = arr[i];
        while (!s.empty() && s.top() > arr[i])
        {
            s.pop();
        }
        if (s.empty())
            arr[i] = -1;
        else
            arr[i] = s.top();
        s.push(temp);
    }
}

void prevGreaterElementusingStack(int arr[], int size)
{
    stack<int> s;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        while (!s.empty() && s.top() > arr[i])
        {
            s.pop();
        }
        if (s.empty())
            arr[i] = -1;
        else
            arr[i] = s.top();
        s.push(temp);
    }
}

void nextGreaterElementusingStack(int arr[], int size)
{
    stack<int> s;
    for (int i = size - 1; i >= 0; i--)
    {
        int temp = arr[i];
        while (!s.empty() && s.top() < arr[i])
        {
            s.pop();
        }
        if (s.empty())
            arr[i] = -1;
        else
            arr[i] = s.top();
        s.push(temp);
    }
}


int main()
{
    int arr[] = {3, 10, 5, 1, 15, 10, 7, 6};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    // prevSmallerElementBruteForce(arr, size);

    // prevSmallerElementusingStack(arr, size);

    // prevGreaterElementusingStack(arr,size);

    // nextSmallerElementusingStack(arr, size);

    nextGreaterElementusingStack(arr, size);
    printArray(arr, size);
    return 0;
}