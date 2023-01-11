#include<iostream>
using namespace std;
int main(){
int var=100;
int* ptr;
int** ptrr;
ptr = &var;
ptrr = &ptr;
cout<<"Value of var "<<var<<endl;
cout<<"Value of ptr "<<*ptr<<endl;
cout<<"Valur of ptrr "<<**ptrr<<endl;
return 0;
}
