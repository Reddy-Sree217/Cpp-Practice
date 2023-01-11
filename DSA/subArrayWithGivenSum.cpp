// Anuj Bhaiya

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void findSubArray(int arr[], int size, int element)
{
    for (int i = 0; i < size - 1; i++)
    {
        int sum = arr[i];
        if (sum == element)
        {
            cout << i << "   " << i << endl;
        }
        for (int j = i + 1; j < size; j++)
        {
            sum += arr[j];
            if (sum == element)
            {
                cout << i << "   " << j << endl;
                break;
            }
        }
    }
}
void findSubArrayUsingHash(int arr[], int size, int element)
{
    unordered_map<int, int> Map;
    int start = 0;
    int curSum = 0;
    int end = -1;
    for (int i = 0; i < size; i++)
    {
        curSum += arr[i];
        if (curSum - element == 0)
        {
            start = 0;
            end = i;
            break;
        }
        if (Map.find(curSum - element) == Map.end())
        {
            Map[curSum] = i;
        }
        else
        {
            start = Map[curSum - element] + 1;
            end = i;
            break;
        }
    }
    if (end != -1)
    {
        cout << start << "  " << end << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 15, -5, 15, -10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // findSubArray(arr, size, 10);
    findSubArrayUsingHash(arr, size, 10);
    return 0;
}
