#include<iostream>
using namespace std;

inline int Max(int x,int y){
    return (x>y)?x:y;
}

int main(){
    cout<<"Max of (10,20): "<<Max(10,20)<<endl;
    cout<<"Max of (0,200): "<<Max(0,200)<<endl;
    cout<<"Max of (10,10): "<<Max(100,100)<<endl;
    return 0;
}