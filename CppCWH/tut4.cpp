#include<iostream>
using namespace std;
int var=10;
void fun(){
    cout<<var;
}
int main(int argc, char const *argv[])
{
    // int var=5;
    var=15;
    fun();
    cout<<var;
    return 0;
}
