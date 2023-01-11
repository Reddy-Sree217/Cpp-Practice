#include <iostream>
#include<algorithm>
using namespace std;

int linearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int *arr,int size,int element){
    int low = 0,mid,high = size - 1;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

void display(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {2, 4, 5, 8, 6, 32, 7, 9};
    int size = sizeof(arr) / sizeof(int);
    int element = 7;
    int linSearch = linearSearch(arr, size, element);
    cout << linSearch << endl;
    sort(arr,arr+size);
    display(arr,size);
    int binSearch = binarySearch(arr,size,element);
    cout << binSearch << endl;
    return 0;
}