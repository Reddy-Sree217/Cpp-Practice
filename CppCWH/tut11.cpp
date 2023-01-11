#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        if(i==5){
            break;        // Breaks the loop or ends the loop if  if condition is true
        }
        cout<<i<<endl;
    }
cout<<"\n"<<"\n";


    for(int i=0;i<10;i++){
        if(i==5){
        continue;       //skips that line if   if condition  is true
        }
        cout<<i<<endl;
    }
}