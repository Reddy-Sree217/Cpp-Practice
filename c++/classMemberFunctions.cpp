#include<iostream>
using namespace std;
class Box {
    public:

    double length,width,height;
    
    void setLength(double len){
        length =len;
    }

    void setWidth(double wid){
        width = wid;
    }
    void setHeight(double hei){
        height = hei;
    }
    double getVolume(void){
        return length*width*height;
    }    
};
/*
void Box::setLength(double len){
    length = len;
}

void Box::setWidth(double wid){
    width = wid;
}

void Box::setHeight(double hei){
    height = hei;
}

double Box :: getVolume(){
    return length*width*height;
}
*/
int main(){
    Box mybox;
    mybox.setLength(20);
    mybox.setWidth(10);
    mybox.setHeight(5);
    cout<<mybox.getVolume()<<endl;
    return 0;
}