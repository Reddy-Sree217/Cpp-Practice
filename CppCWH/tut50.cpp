#include<iostream>
using namespace std;



int main(){


    int *p = new int(10);
    cout<<"value at p is: "<<*p<<endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"value of arr[0] is: "<<arr[0]<<endl;
    cout<<"value of arr[1]is: "<<arr[1]<<endl;
    cout<<"value of arr[2] is: "<<arr[2]<<endl;
    // cout<<*(arr+1)<<endl;
    delete p; //deletes the memory
    cout<<"value at p is: "<<*p<<endl;
    return 0;
}