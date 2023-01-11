#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:
    void setX(int x_point){
         x = x_point;
    }
    void setY(int y_point){
         y = y_point;
    }
    friend void printPoint(Point point);
};

void printPoint(Point point){
    cout<<"X = "<<point.x<<" Y = "<<point.y<<endl;
}

int main(){
    Point point;
    point.setX(10);
    point.setY(20);
    printPoint(point);
    return 0;
}