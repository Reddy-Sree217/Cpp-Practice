#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct
{
    int roll;
    string name;
} student;



void myFunct(string country="INDIA"){
    cout<<country<<endl;
}

int main()
{

    // string firstName = "Sreenivasulu ";
    // string lastName = "Reddy";
    // string fullName;
    // fullName = firstName + lastName;
    // cout << fullName << endl;
    // fullName.append(" Kamalapuram");
    // cout << fullName << endl;

    // string x = "10";
    // string y = "20";
    // string z = x + y;
    // cout << z << endl;
    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.length()<<endl;
    // int k=1546335;
    // string to = to_string(k);
    // cout<<to.length()<<endl;

    // string change = "Hello";
    // change[0] = 'J';
    // cout<<change<<endl;

    // getline(cin,fullName);
    // cout<<fullName<<endl;

    // int num1 = 10;
    // int num2 = 100;
    // cout<<min(max(num1,num2),10)<<endl;
    // float num3 = 3.14;
    // cout<<round(num3)<<endl;

    // int day = 4;
    // switch(day){
    //     case 1:
    //     cout<<"Monday"<<endl;
    //     break;
    //     case 2:
    //     cout<<"Tuesday"<<endl;
    //     break;
    //     case 3:
    //     cout<<"Wednesday"<<endl;
    //     break;
    //     case 4:
    //     cout<<"Thursday"<<endl;
    //     break;
    //     case 5:
    //     cout<<"Friday"<<endl;
    //     break;
    //     case 6:
    //     cout<<"Saturday"<<endl;
    //     break;
    //     default:
    //     cout<<"Sunday"<<endl;
    //     break;
    // }

    // int i=10;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<12);



    // student.roll = 217;
    // student.name = "sree";

    // cout << student.roll << endl
    //      << student.name << endl;




    // string food = "roti";
    // string &meal = food;  //Reference
    // food = "dosa";
    // cout<<meal<<endl;
    // cout<<food<<endl;



    // int* ptr,p;
    // p=10;
    // ptr = &p;
    // cout<<ptr<<endl;
    // cout<<p<<endl;

    myFunct("USA");
    myFunct();
    myFunct("AUSTRALIA");


    return 0;
}

