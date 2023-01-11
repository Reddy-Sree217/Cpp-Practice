#include <iostream>
using namespace std;

int binarySearch(int arr[], int target)
{
    int start = 0;
    int end = 1;
    while (target > arr[end])
    {
        int temp = end + 1;
        end = end + (end - start + 1) * 2;
        start = temp;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15, 20, 100};
    int target = 16;
    cout << binarySearch(arr, target);
    return 0;
}
