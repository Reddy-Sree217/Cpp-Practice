#include<iostream>
using namespace std;
int main(){
int var1 = 10;
double var2 = 10.24;
int& var3 = var1;
cout<<var1<<endl;
cout<<var3<<endl;

var3 = 20;
cout<<var1<<endl;
cout<<var3<<endl;

return 0;
}
