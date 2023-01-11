#include<iostream>
#include<time.h>
using namespace std;

int main(){
    cout<<"Generating 10 random numbers"<<endl;
    for(int i=0;i<10;i++){
        cout<<rand()<<endl;
    }
    cout<<"But prints the same set of rand numbers everytime"<<endl<<endl;
    for(int i=0;i<10;i++){
        cout<<rand()<<endl;
    }
    cout<<endl;
    srand(time(0));
    cout<<"Seeding the value wrt time"<<endl;
    for(int i=0;i<10;i++){
        cout<<rand()<<endl;
    }

    cout<<endl<<endl;
    for(int i=0;i<10;i++){
    cout<<rand()%30+2020<<endl;
    }

    return 0;
}