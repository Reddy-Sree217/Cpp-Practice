#include<iostream>
using namespace std;

class Base{
    int* arr;
    int size;
    int value;
    public:
    void setData(int x);
    void printData(void);
    void removeElement(int);
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

void Base::removeElement(int num){
    value = num;
    int i = 0;
        for(int j=0; j<size; j++){
            if(arr[j]!=value){
                arr[i]=arr[j];
                i++;
            }
        }
        for(int j=0;j<i;j++){
            cout<<arr[j]<<" ";
        }
}

int main(){
    Base obj;
    obj.setData(5);
    cout<<endl<<endl;
    // obj.printData();
    cout<<endl<<endl;

    obj.removeElement(5);
    // obj.printData();
    return 0;
}
