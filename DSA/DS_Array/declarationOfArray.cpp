#include<iostream>
using namespace std;


void display(int *arr){
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void swap(int arr[],int index1,int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp; 
}

void rotation(int arr[],int d,int n){
    if(d == 0 || d == n){
        return;
    }
    d = d % n;  //--> helps if d > n
    for(int i=0;i<d;i++){
        swap(arr,i,n-d+i);
    }
}

int main(){
    int arr[7];
for(int i= 0;i<7;i++){
    arr[i] = i+1;
    // i[arr] = i+1;  //another way
}
    // cout<<2[arr]<<endl; //another way i[arr]
    display(arr);
    // swap(arr,0,4);
    // display(arr);
    rotation(arr,2,7);
    display(arr);
    return 0;
}