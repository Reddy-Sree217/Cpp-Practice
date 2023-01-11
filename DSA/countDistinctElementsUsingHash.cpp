#include <iostream>
#include <unordered_set>
using namespace std;

void countdistinct(int arr[], int size)
{
    unordered_set<int> s;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
    }
    cout << " Number of Distinct Elements are " << s.size() << endl;
    cout << " Number of Repetitive Elements are " << size - s.size() << endl;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 5, 6, 6, 0, 0, 0, 0};
    int size = sizeof(arr) / sizeof(int);
    countdistinct(arr, size);
    return 0;
}