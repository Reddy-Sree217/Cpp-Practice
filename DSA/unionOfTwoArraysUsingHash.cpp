#include <iostream>
#include <unordered_set>
using namespace std;

int unionOfArray(int arr1[], int size1, int arr2[], int size2)
{
    unordered_set<int> s;
    for (int i = 0; i < size1; i++)
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        s.insert(arr2[i]);
    }
    return s.size();
}

int main(int argc, char const *argv[])
{
    int arr1[] = {3, 3, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3,4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int sizeOfUnion = unionOfArray(arr1, size1, arr2, size2);
    cout << sizeOfUnion << endl;
    return 0;
}
