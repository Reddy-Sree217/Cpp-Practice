#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int start, int end, int num)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == num)
            return true;
        else if (arr[mid] >= num)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}

int main()
{
    int arr[] = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size << endl;
    sort(arr, arr + size);
    vector<int> ans;
    printArray(arr, size);
    for (int i = 1; i <= size; i++)
    {
        if (!binarySearch(arr, 0, size - 1, i))
            ans.push_back(i);
    }
    printArray(ans, ans.size());
    return 0;
}