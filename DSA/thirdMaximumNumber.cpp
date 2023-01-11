#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 5, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    if (size <= 3)
    {
        cout << arr[size - 1];
        return 0;
    }
    int ans = arr[size - 1];
    int count = 1;
    for (int i = size - 2; i >= 0; i--)
    {
        if (arr[i] < ans)
        {
            count++;
            ans = arr[i];
        }
        if (count == 3)
        {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}