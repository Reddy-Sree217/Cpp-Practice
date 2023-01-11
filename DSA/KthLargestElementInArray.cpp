#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {5, 5, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    int count = 1;
    sort(arr, arr + size);
    int ans = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        if (count == k)
        {
            cout << arr[i] << endl;
            return 0;
        }
        count++;
        ans = max(ans, arr[i]);
    }
    return 0;
}