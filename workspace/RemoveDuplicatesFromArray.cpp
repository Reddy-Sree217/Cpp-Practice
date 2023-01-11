#include<iostream>
using namespace std;


class Base{
    int* arr;
    int size;
    public:
    void setData(int x);
    void printData(void);
    void removeDuplicates(void);
};


void Base::setData(int x){
    size = x;
    arr = new int[size];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
}


void Base::printData(void){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

void Base::removeDuplicates(void){
    int left=0;
    for(int right = 0;right<size;right++){
        if(arr[left] == arr[right]){
            continue;
        }
        left++;
        arr[left] = arr[right];
    }
    for(int i=0;i<left+1;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    Base obj;
    obj.setData(11);
    cout<<endl<<endl;
    // obj.printData();
    cout<<endl<<endl;

    obj.removeDuplicates();
    // obj.printData();
    return 0;
}