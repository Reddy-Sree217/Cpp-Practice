#include <iostream>
using namespace std;

class simpleCalculator
{
protected:
    float a = 0, b = 0, result = 0;

public:
    void setData(void);
    void sum(void);
    void difference(void);
};

void simpleCalculator::setData(void)
{
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
}

void simpleCalculator::sum(void)
{
    result = a + b;
}
void simpleCalculator::difference(void)
{
    result = a - b;
}

class ScientificCalculator
{
protected:
    double a1 = 0, b1 = 0, result1 = 0;

public:
    void setData1(void);
    void product(void);
    void division(void);
};

void ScientificCalculator::setData1(void){
    cout << "Enter the first number" << endl;
    cin >> a1;
    cout << "Enter the second number" << endl;
    cin >> b1;
}

void ScientificCalculator::product(void)
{
    result1 = a1 * b1;
}
void ScientificCalculator::division(void)
{
    result1 = a1 / b1;
}

class display:public simpleCalculator,public ScientificCalculator{
    public:
        void show(void);
};

void display::show(void){
    char c;
    cout<<"Enter operand"<<endl;
    cin>>c;
    if(c =='+'){
        cout<<a+b<<endl;
    }
}

int main()
{
    display d1;
    d1.setData();
    d1.show();
    return 0;
}