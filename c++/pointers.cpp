#include<iostream>
using namespace std;
int main(){
int i = 10;
int *ptr;
ptr = &i;
cout<<i<<endl;
cout<<*ptr<<endl;

*ptr = 20;
cout<<i<<endl;
cout<<*ptr<<endl;

return 0;
}
