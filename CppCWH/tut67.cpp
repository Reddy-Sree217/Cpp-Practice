#include<iostream>
using namespace std;


template<class T>

void swapp(T &num1,T &num2){
    T temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    float a=4.6;
    float b=6.4;
    cout<<a<<endl
        <<b<<endl;

    swapp(a,b);

    cout<<a<<endl
        <<b<<endl;
    return 0;
}