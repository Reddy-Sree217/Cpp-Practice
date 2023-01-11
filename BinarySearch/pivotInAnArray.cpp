#include <iostream>
#include <vector>
using namespace std;

int binarySearchToFindPivot(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= arr[0])
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

// int binarySearchToFindPivot(vector<int> &arr)
// {
//     int left = 0;
//     int right = arr.size() - 1;
//     int e = arr.size() - 1;
//     while (left < right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] <= arr[e])
//             right = mid - 1;
//         else
//             left = mid;
//     }
//     return right;
// }

int main()
{
    vector<int> arr{8, 10, 17, 19, 0, 1, 3};
    int pivot = binarySearchToFindPivot(arr);

    cout << "Pivot is: " << pivot << endl;
    return 0;
}