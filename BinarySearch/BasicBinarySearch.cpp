#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr{2, 3, 4, 6, 8, 9, 20};
    int target = 9;
    cout << "Index of target is: " << binarySearch(arr, target) << endl;
    return 0;
}