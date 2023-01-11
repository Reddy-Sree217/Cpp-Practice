#include<iostream>
using namespace std;

class Vehicles{
    public:
    string name = "BMW";
    void honk(void);
};

class Car:public Vehicles{
    public:
    string model="zn9000";
};

void Vehicles::honk(void){
    cout<<"Tuuuuu.....Tuuuuu"<<endl;
}

int main(){
    Car car;
    cout<<car.name<<" ";
    cout<<car.model<<endl;
    car.honk();
    return 0;
}