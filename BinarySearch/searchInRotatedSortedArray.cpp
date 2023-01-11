#include <iostream>
#include <vector>
using namespace std;

int binarySearchInRotatedSortedArray(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[left] <= arr[mid])
        {
            if (arr[left] <= target && arr[mid] >= target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if (arr[mid] <= target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{1,3};
    int target = 3;
    int targetIndex = binarySearchInRotatedSortedArray(arr, target);
    cout << "Position of target is: " << targetIndex << endl;
    return 0;
}