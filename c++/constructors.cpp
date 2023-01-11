#include<iostream>
using namespace std;

class Box{

    public:
    Box(){
        cout<<"Box is Created"<<endl;
    }

    int length,width;
    void setLength(int len){
        length = len;
    }
    void setWidth(int wid){
        width = wid;
    }
    int printArea(){
        return length*width; 
    }
};

int main(){
    Box mybox;
    mybox.setLength(10);
    mybox.setWidth(5);
    cout<<mybox.printArea()<<endl;
    return 0;
}