#include<iostream>
using namespace std;

class Array{
    int size;
    int *p;
    public:
    Array(Array *,int);
    void setArray(Array *,int);
    void printArray(Array *,int);
    void deletionOfElement(Array *,int);
};

Array::Array(Array *arr,int size){
    this->size = size;
    (*arr).p = (int*)malloc((*arr).size*sizeof(int));
}

void Array::setArray(Array *arr,int numElements){
    for(int i=0;i<numElements;i++){
        (*arr).p[i] = rand()%25;
    }
}

void Array::printArray(Array *arr,int num){
    for(int i=0;i<num;i++){
        cout<<i<<"  "<<(*arr).p[i]<<endl;
    }
}

void Array::deletionOfElement(Array *arr,int pos){
    for(int i=pos;i<size;i++){
        (*arr).p[i]=(*arr).p[i+1];
    }
    (*arr).p[size-1]=0;
}

int main(){ 
    Array arr1(&arr1,100);
    arr1.setArray(&arr1,25);
    arr1.printArray(&arr1,25);
    arr1.deletionOfElement(&arr1,3);
    cout<<"After deletion!"<<endl;
    arr1.printArray(&arr1,25);

    return 0;
}