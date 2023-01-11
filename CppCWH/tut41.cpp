#include<iostream>
using namespace std;

class Base1{
    protected:
    int Base1Int;
    public:
    void setData1(int);
    void getData1(void);
};

void Base1::setData1(int data){
    Base1Int = data;
}
void Base1::getData1(){
    cout<<Base1Int<<endl;
}

class Base2{
    protected:
    int Base2Int;
    public:
    void setData2(int);
    void getData2(void);
};

void Base2::setData2(int data){
    Base2Int = data;
}
void Base2::getData2(){
    cout<<Base2Int<<endl;
}


class Derived:public Base1,public Base2{
    public:
    void display(void);
};

void Derived::display(void){
    cout<<"Sum of the values is: "<<Base1Int+Base2Int<<endl;
}



int main(){
    Derived d;
    d.setData1(10);
    d.setData2(20);
    d.display();
    return 0;
}