#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string title, float rating){
        this->title = title;
        this->rating = rating;
    }
    virtual void display(void){}
};


class CWHVideo:public CWH{
    float vLength;
    public:
    CWHVideo(string title,float rating,float vLength):CWH(title,rating){
        this->vLength = vLength;
    }
    void display(void){
        cout<<title<<endl   
            <<rating<<endl  
            <<vLength<<endl;
    }
};


int main(){
    CWHVideo obj("harry",4.5,14);
    // obj.display();

    CWH* ptr;   // As Virtual keyword is mentioned display function which is in derived class is executed
    ptr = &obj;
    ptr->display();

    return 0;
}