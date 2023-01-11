#include<iostream>
// #include<stdlib.h>
using namespace std;

class myArray{
    int maxSize;
    int usedSize;
    int *ptr;
    public:
    myArray(myArray *,int ,int );
    void setArray(myArray *);
    void printArray(myArray *);
};


myArray::myArray(myArray *a,int mSize,int uSize){

    // (*a).maxSize = mSize;
    // (*a).usedSize = uSize;
    // (*a).ptr = (int *)malloc(mSize*sizeof(int));

// (*a).  can also be written as a->

    a->maxSize = mSize;
    a->usedSize = uSize;
    a->ptr = (int *)malloc(mSize*sizeof(int));

}

void myArray::setArray(myArray *a){
    cout<<"Enter the values: "<<endl;
    // int k=0;
    for(int i=0;i<(*a).usedSize;i++){
        // (*a).ptr[i] = k;
        cin>>(*a).ptr[i];
    }
}

void myArray::printArray(myArray *a){
    for(int i=0;i<(*a).usedSize;i++){
        cout<<(*a).ptr[i]<<endl;
    }
}


int main(){
    myArray array=myArray(&array,100,5);
    array.setArray(&array);
    cout<<endl;
    array.printArray(&array);
    return 0;
}