#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void swapreferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
        int a=5;
        cout<<a<<endl;
        cout<<&a<<endl;
        int &b=a;
        cout<<b<<endl;
        b=10;
        cout<<a<<endl;
        cout<<&b<<endl;



    int num1 = 4, num2 = 5;
    cout << "num1= " << num1 << endl;
    cout << "num2= " << num2 << endl;
    // cout<<"The sum of : "<<sum(4,5);
    swap(&num1, &num2);
    cout << "num1= " << num1 << endl;
    cout << "num2= " << num2 << endl;
    
    swapreferenceVar(num1, num2);
    cout << "num1= " << num1 << endl;
    cout << "num2= " << num2 << endl;

    return 0;
}