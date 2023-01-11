#include <iostream>
#include <vector>
using namespace std;

int modifiedBinarySearchFirstOccurance(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return ans;
}

int modifiedBinarySearchLastOccurance(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 5};
    int target = 3;
    int firstOccurance = modifiedBinarySearchFirstOccurance(arr, target);
    if (firstOccurance == -1)
        cout << "Target doesnot exist" << endl;
    else
    {
        int lastOccurance = modifiedBinarySearchLastOccurance(arr, target);
        cout << "First Occurance of target is: " << firstOccurance << endl;
        cout << "LastOccuarnce of target is: " << lastOccurance << endl;
    }
    return 0;
}
