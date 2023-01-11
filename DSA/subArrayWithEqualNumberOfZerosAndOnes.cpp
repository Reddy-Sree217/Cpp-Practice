#include <iostream>
#include <unordered_map>
using namespace std;

void subArrayWithEqualZerosAndOnes(int arr[], int size)
{
    unordered_map<int, int> Map;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            arr[i] = -1;
    }
    int start = 0;
    int end = -1;
    int curSum = 0;
    int element = 0;
    int maxSize = -1;
    for (int i = 0; i < size; i++)
    {
        curSum += arr[i];
        if (curSum - element == 0)
        {
            start = 0;
            end = i;
            maxSize = max(maxSize, (end - start));
        }
        if (Map.find(curSum - element) == Map.end())
            Map[curSum - element] = i;
        else
        {
            start = Map[curSum - element] + 1;
            end = i;
            maxSize = max(maxSize, (end - start));
        }
    }
    cout << maxSize + 1 << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    subArrayWithEqualZerosAndOnes(arr, size);
    return 0;
}
