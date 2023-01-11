#include<iostream>
#include<algorithm>
using namespace std;


void display(int* arr){
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,1,3,77,5,12,4};
    display(arr);
    sort(arr,arr+7);
    cout<<"Sorted in Ascending order"<<endl;
    display(arr);
    sort(arr,arr+7,greater<int>());
    cout<<"Sorted in Descending order"<<endl;
    display(arr);
    return 0;
}