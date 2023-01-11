#include<iostream>
using namespace std;
extern int Count;
extern void write_count();
int main(){
Count = 10;
write_count();
return 0;
}
