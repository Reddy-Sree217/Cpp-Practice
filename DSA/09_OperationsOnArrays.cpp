#include<iostream>
#include<time.h>
using namespace std;


class myArray{
    int maxSize;
    int usedSize;
    public:
    int *p;
    myArray(myArray *,int);
    void setArray(myArray *,int);
    void printArray(myArray *);
    void insertElement(myArray *,int,int);
};

myArray::myArray(myArray *a,int mSize){
    (*a).maxSize = mSize;
    (*a).p = (int *)malloc(mSize*sizeof(int));
}

void myArray::setArray(myArray *a,int uSize){
    cout<<"Enter the values: "<<endl;
    // srand(time(0));
    (*a).usedSize = uSize;
    for(int i=0;i<uSize;i++){
        (*a).p[i]=rand()%20;
        // cin>>p[i];
    }
}
void myArray::printArray(myArray *a){
    // cout<<"Enter the values: "<<endl;
    for(int i=0;i<(*a).usedSize;i++){
        cout<<p[i]<<endl;
    }
}


void myArray::insertElement(myArray *a,int pos,int val){
    if(pos>(*a).maxSize){
        cout<<"Insertion not possible!"<<endl;
        exit(0);
    }
    if(pos==(*a).usedSize){
        (*a).p[pos] = val;
        (*a).usedSize++;
    }
    if(pos>(*a).usedSize){
        (*a).p[(*a).usedSize] = val;
        (*a).usedSize++;
    }
    if(pos<(*a).usedSize){
        for(int i=usedSize;i>=usedSize-pos;i--){
            (*a).p[i] = (*a).p[i-1];
        }
        (*a).usedSize++;
        (*a).p[pos] = val;
    }

}



int main(){
    myArray array1(&array1,100);
    array1.setArray(&array1,5);
    myArray array2(&array2,200);
    // array2.setArray(&array2,5);
    array1.printArray(&array1);
    // array2.printArray(&array2);
    // cout<<array1.p<<endl;
    // cout<<array2.p;
    array1.insertElement(&array1,2,26);
    array1.insertElement(&array1,3,27);
    cout<<endl<<endl<<endl;
    array1.printArray(&array1);
    return 0;
}