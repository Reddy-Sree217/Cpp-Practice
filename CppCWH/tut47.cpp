#include <iostream>
using namespace std;

class SimpleCalculator
{
protected:
    float a = 0;
    float b = 0;

public:
    void setData(float, float);
};

void SimpleCalculator::setData(float num1, float num2)
{
    a = num1;
    b = num2;
}

class ScientificCalculator:virtual public SimpleCalculator{

};



int main()
{

    return 0;
}