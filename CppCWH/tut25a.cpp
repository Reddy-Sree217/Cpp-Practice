#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setDetails();
    void getDetails();
};

void Employee::setDetails()
{
    cout << "Enter the id of the employee: " << endl;
    cin >> id;

    // cout<<"Enter the salary of the employee: "<<endl;
    // cin>>salary;
}

void Employee::getDetails()
{
    cout << "Id of employee: " << id << endl;
    // cout<<"Salary of employee: "<<id<<endl;
}

int main()
{
    Employee google[5]; // Array od Objects
    for (int i = 0; i < 5; i++)
    {
        google[i].setDetails();
        google[i].getDetails();
    }
    return 0;
}