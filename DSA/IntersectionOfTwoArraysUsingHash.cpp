#include <iostream>
#include <unordered_set>
using namespace std;
void intersection(int arr1[], int size1, int arr2[], int size2)
{
    unordered_set<int> s;
    for (int i = 0; i < size1; i++)
    {
        s.insert(arr1[i]);
    }
    int count = 0;
    for (int i = 0; i < size2; i++)
    {
        if (s.count(arr2[i]))
        {
            count++;
            s.erase(arr2[i]);
        }
    }
    cout << count << endl;
}

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, size1, arr2, size2);
    return 0;
}
