#include<iostream>
using namespace std;
class Box{
public:
double length,width,height;
};

int main(){
Box box1;
box1.length = 10;
box1.width = 7;
box1.height = 5;
cout<<box1.length*box1.width*box1.height<<endl;
return 0;
}
