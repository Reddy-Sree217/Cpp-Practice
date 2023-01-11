#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


void combinationSum(int i,int size,int currSum,vector<int>& arr,int target,vector<int>& ds){
    if(currSum == target){
        print(ds);
        cout<<endl;
        return;
    }
    
    if(currSum>target)
        return;
    if(i==size)
        return;
    ds.push_back(arr[i]);
    currSum += arr[i];
    combinationSum(i,size,currSum,arr,target,ds);
    ds.pop_back();
    currSum -= arr[i];
    combinationSum(i+1,size,currSum,arr,target,ds);
}

int main(){
    vector<int> arr;
    int size = 3;
    
    for(int i=0;i<size;i++){
        int n = 0;
        cin>>n;
        arr.push_back(n);
    }
    cout<<"Input: ";
    print(arr);
    cout<<endl;
    cout<<endl;
    
    int target = 8;
    
    vector<int> ds;
    cout<<"Output: ";
    combinationSum(0,size,0,arr,target,ds);
    
        
    return 0;
}