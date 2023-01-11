#include <iostream>
#include <vector>
using namespace std;

int binarySearchForFirstOccurance(vector<int> &arr, int target)
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
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return ans;
}

int binarySearchForLastOccurance(vector<int> &arr, int target)
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

int binarySearchForTotalOccurances(vector<int> &arr, int target)
{
    int firstOccurance = binarySearchForFirstOccurance(arr, target);

    if (firstOccurance == -1)
        return 0;
    int lastOccurance = binarySearchForLastOccurance(arr, target);

    return lastOccurance - firstOccurance + 1;
}

int main()
{
    vector<int> arr{2, 3, 5, 5, 5, 5, 5, 6, 8};
    int target = 5;

    int totalOccurances = binarySearchForTotalOccurances(arr, target);

    cout << "Total Number of Occurances of target is: ";
    cout << totalOccurances << endl;
    return 0;
}