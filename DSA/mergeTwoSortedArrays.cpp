
// Approach 1
// Using extra space
/*
#include <iostream>
#include<algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2)
{
    int size=size1+size2;
    int arr[size];
    for(int i=0;i<size1;i++)
        arr[i] = arr1[i];
    for(int i=0;i<size2;i++)
        arr[size1+i] = arr2[i];
    cout<<"Before sorting"<<endl;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"After sorting"<<endl;
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr1[] = {10,11,22};
    int arr2[] = {2, 4, 6};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    merge(arr1, arr2, size1, size2);
    return 0;
}
*/

// Method-2 without using extra space

#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void merge(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < max(size1, size2); i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            sort(arr2 , arr2 + size2);
        }
    }
    for(int i=0;i<size1;i++)
        cout<<arr1[i]<<" ";

    for(int i=0;i<size2;i++)
        cout<<arr2[i]<<" ";
        
}

int main()
{
    int arr1[] = {13, 17, 18, 19, 20, 22, 22, 27, 36, 39, 46, 48, 50};
    int arr2[] = {4, 12, 45};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    merge(arr1, arr2, size1, size2);
    return 0;
}
