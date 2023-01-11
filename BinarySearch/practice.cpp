#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

int main()
{
    vector<int> arr{0, 1, 3};
    cout << func(arr) << endl;
    return 0;
}