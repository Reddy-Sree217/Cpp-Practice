#include <iostream>
#include <vector>
using namespace std;

// int binarySearchForFindingPeakIndex(vector<int> &arr)
// {
//     int left = 0;
//     int right = arr.size() - 1;
//     int ans = -1;

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
//             return mid;
//         else if (arr[mid] > arr[mid - 1])
//             left = mid + 1;
//         else
//             right = mid;
//     }
//     return ans;
// }

int binarySearchForFindingPeakIndex(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}


int main()
{

    vector<int> arr{24, 69, 100, 99, 79, 78, 67, 36, 26, 19};

    int peakIndex = binarySearchForFindingPeakIndex(arr);

    cout << "Peak Index of Mountain is: " << peakIndex << endl;

    return 0;
}