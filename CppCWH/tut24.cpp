#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int counter;

public:
    void setData();
    void getData();
    void displayCount();

    static int Count(){
        // cout<<id; //Throws errorrrr becoz id is not a static variable
        cout<<counter<<endl;
    }
};

void Employee::setData()
{
    cout << "Enter the id of the employee: " << endl;
    cin >> id;
    counter++;
}
void Employee::getData()
{
    cout << "Id of this employee is: " << id << endl;
    displayCount();
}
void Employee::displayCount()
{
    cout << "Employee count is: " << counter << endl;
    ;
}

int Employee::counter; // Default value of counter will be 0
// To start the counter from lets say 100
//  int Employee::counter=100;  //COunter value starts from 100

int main()
{
    Employee litheesh, pavan, vishal;
    litheesh.setData();
    litheesh.getData();
    Employee::Count();
    pavan.setData();
    pavan.getData();
    Employee::Count();

    vishal.setData();
    vishal.getData();
    Employee::Count();
    return 0;
}