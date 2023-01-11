#include<iostream>
using namespace std;


int count=0;
class num{
    public:
    num(void);   //Constructor
    ~num(void); //Destructor
};

//Destructor neither takes an argument nor returns 

num::num(void){
    count++;
    cout<<"Constructor is called!"<<count<<endl;
}

num::~num(void){
    cout<<"Destructor is called!"<<count<<endl;
    count--;
}
int main(){
    cout<<"Entering into main\t"<<endl;
    num n1;{
        cout<<"n1 created"<<endl;
        num n2,n3;
    }
    cout<<"Exiting main block"<<endl;
    
    return 0;
}