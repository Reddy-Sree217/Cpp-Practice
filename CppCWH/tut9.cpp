#include<iostream>
using namespace std;

int main(){
    // cout<<"This is tut9"<<endl;
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age<18){
        cout<<"Not eligible";
    }
    else{
        cout<<"Eligible";
    }
    cout<<"\n";

    int day;
    cout<<"Enter day no.";
    cin>>day;
    switch (day)
    {
    case 1:
    cout<<"Monday";
        break;
        
    case 2:
    cout<<"Tuesday";
        break;
    case 3:
    cout<<"Wednesday";
        break;
    case 4:
    cout<<"Thursday";
        break;
    case 5:
    cout<<"Friday";
        break;
    case 6:
    cout<<"Saturday";
        break;
    case 7:
    cout<<"Sunday";
        break;

    default:
    cout<<"Invalid";
        break;
    }
    return 0;
}