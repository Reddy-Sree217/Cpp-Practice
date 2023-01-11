#include <iostream>
#include <unordered_set>
using namespace std;

void func(int arr[], int size, int window)
{
    unordered_set<int> s;
    for (int i = 0; i < size; i++)
    {
        s.insert(arr[i]);
        if (i == window - 1)
        {
            cout << s.size() << endl;
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 2, 1, 3, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int window = 4;
    func(arr, size, window);
    return 0;
}
