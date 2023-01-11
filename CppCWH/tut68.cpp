#include<iostream>
using namespace std;

template<class T>

class Base{
    public:
    T var;
    Base(T);
    void display(void);
};

template<class T>
Base<T>::Base(T var){
    this->var = var;
}

template<class T>
void Base<T>::display(void){
    cout<<var<<endl;
}


int main(){
    Base<int> obj(13.4);
    obj.display();
    return 0;
}