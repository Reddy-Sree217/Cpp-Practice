#include <iostream>
#include <vector>
using namespace std;

int binarySearchForIndexPosition(vector<int> &arr, int target)
{
    if (target <= arr[0])
        return 0;
    if (target > arr[arr.size() - 1])
        return arr.size() - 1;

    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
        {
            ans = mid;
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 3, 5, 6};
    int target = 5;
    int index = binarySearchForIndexPosition(arr, target);
    cout << "Index Position is: " << index << endl;
    return 0;
}