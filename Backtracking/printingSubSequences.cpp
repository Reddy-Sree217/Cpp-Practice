#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


void printSubsequences(int i,int size,vector<int>& arr,vector<int>& ds){
    if(i==size){
        print(ds);
        cout<<endl;
        return;
    }
    
    ds.push_back(arr[i]);
    printSubsequences(i+1,size,arr,ds);
    ds.pop_back();
    printSubsequences(i+1,size,arr,ds);
    
}


int main() {
	vector<int> arr;
	int size = 3;
	for(int i=0;i<size;i++){
	    int n = 0;
	    cin>>n;
	    arr.push_back(n);
	}
	
	print(arr);
	cout<<endl;
	cout<<endl;
	
	vector<int> ds;
	printSubsequences(0,3,arr,ds);
	return 0;
}