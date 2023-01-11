#include<iostream>
using namespace std;

// type function_name(arguments)
int sum(int,int);       //Function Prototype
void greet();
int  main(){
    greet();
    int num1,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"Sum of two numbers is: "<<sum(num1,num2);
    return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
void greet(){
    cout<<"Hello all!\n"<<endl;
}