#include<iostream>
using namespace std;

int maxSumOfSubArray(int* arr,int size){
    int currentSum = 0;
    int maxSum = arr[0];
    for(int i=0;i<size;i++){
        currentSum+=arr[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
        if(currentSum<0)
            currentSum = 0;
    }
    return maxSum;
}


int main(){
    int arr[]={2,-3,5,1,-6,4};
    int size = sizeof(arr)/sizeof(int);
    cout<<maxSumOfSubArray(arr,size)<<endl; 
    return 0;
}

