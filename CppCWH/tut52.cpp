#include <iostream>
using namespace std;

class Shop
{
protected:
    int id;
    float price;

public:
    void setData(int, float);
    void getData(void);
};

void Shop::setData(int a, float b)
{
    id = a;
    price = b;
}

void Shop::getData(void){
    cout<<"Price of item of id no. "<<id<<" is "<<price<<endl;
}

int main()
{
    int size=3;
    int id;
    float profit;
    Shop* shop =new Shop[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the id and Profit"<<endl;
        cin>>id>>profit;
        (shop+i)->setData(id,profit);
    }
    for(int i=0;i<size;i++){
        // (*(shop+i)).getData();
        (shop+i)->getData();
    }

    return 0;
}