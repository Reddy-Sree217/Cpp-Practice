#include <iostream>
#include <string>
using namespace std;

void reverse(int arr[], int left, int right)
{
    if (left >= right)
        return;
    swap(arr[left], arr[right]);
    reverse(arr, left + 1, right - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkPlaindrome(string s1, int left, int right)
{
    if (left >= right)
        return true;
    if (s1[left] != s1[right])
        return false;
    return checkPlaindrome(s1, left + 1, right - 1);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    // printArray(arr, 6);
    // reverse(arr, 0, 5);
    // printArray(arr, 6);

    string s1 = "absba";
    cout << checkPlaindrome(s1, 0, 4);
    return 0;
}