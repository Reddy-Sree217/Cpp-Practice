#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


void printSubsequences(int i,int size,int currSum,vector<int>& arr,vector<int>& ds,int target){
    if(i==size && currSum == target){
        print(ds);
        cout<<endl;
        return;
    }
    else if(currSum>target)
        return;
    else if(i==size && currSum!=target)
        return;
    
    ds.push_back(arr[i]);
    currSum+=arr[i];
    printSubsequences(i+1,size,currSum,arr,ds,target);
    ds.pop_back();
    currSum-=arr[i];
    printSubsequences(i+1,size,currSum,arr,ds,target);
    
}


int main() {
	vector<int> arr;
	int size = 5;
	for(int i=0;i<size;i++){
	    int n = 0;
	    cin>>n;
	    arr.push_back(n);
	}
	
	int target = 6;
	
	print(arr);
	cout<<endl;
	cout<<endl;
	
	vector<int> ds;
	printSubsequences(0,size,0,arr,ds,target);
	return 0;
}