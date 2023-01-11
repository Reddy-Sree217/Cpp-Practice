#include<iostream>
#include<stdlib.h>
using namespace std;

class Solution{
    public:
        int size;
        int target;
        int *array;
        void setSize(int);
        void setTarget(int);
        void createArray(void);
        void print(void);
};

void Solution::setSize(int size){
    this->size = size;
}

void Solution::setTarget(int target){
    this->target = target;
}

void Solution::createArray(void){
    array = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

void Solution::print(void){
    // for(int i=0;i<size;i++){
    //     cout<<array[i];
    // }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j] == target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                exit(0);
            }
        }
    }
}

int main(){
    Solution trail1;
    int sizeOfMatrix;
    int Target;
    cout<<"Enter the sizeOfMatrix:"<<endl;
    cin>>sizeOfMatrix;
    
    cout<<"Enter the Target:"<<endl;
    cin>>Target;

    trail1.setSize(sizeOfMatrix);
    trail1.setTarget(Target);
    trail1.createArray();
    trail1.print();

    return 0;
}