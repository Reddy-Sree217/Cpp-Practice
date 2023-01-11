#include<iostream>
using namespace std;

//**********Struct**********
// typedef struct employee{
//     int id;
//     char Gender;
//     float salary;
// }emp;
//**********Struct**********

//**********Union**********
union money
{
    int hund_notes;
    int fif_notes;
    float thous_notes;
};
//**********Union**********

int main(){

//**********Struct**********
    // emp harry;
    // harry.id=10;
    // harry.Gender='M';
    // harry.salary=24800000;
    // cout<<harry.id<<endl;
    // cout<<harry.Gender<<endl;
    // cout<<harry.salary<<endl;
//**********Struct**********

//**********Union**********
    union money mon;
    mon.hund_notes=25;
    mon.thous_notes=25;
    // cout<<mon.hund_notes;
    cout<<mon.thous_notes;
//**********Union**********
    cout<<"\n";
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal a=dinner;  //or int a=dinner works fine
    cout<<a<<endl;
    return 0;
}

// 7:21