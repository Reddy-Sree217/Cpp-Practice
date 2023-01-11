#include<iostream>
using namespace std;
int *getRandom(){
static int arr[10];
for(int i=0;i<10;i++){
arr[i]=rand();
cout<<arr[i]<<endl;
}
cout<<endl;
return arr;
}
int main(){
int *p = getRandom();
for(int i=0;i<10;i++){
cout<<*(p+i)<<endl;
}
}
