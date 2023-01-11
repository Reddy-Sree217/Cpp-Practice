#include <iostream>
using namespace std;

template <class T>

class vector
{
public:
    T *arr;
    int size;
    T product(vector &v)
    {
        T product = 0;
        for (int i = 0; i < size; i++)
        {
            product += arr[i] * v.arr[i];
        }
        return product;
    }
    vector(int size)
    {
        this->size = size;
        arr = new T[size];
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 3.0;
    v1.arr[1] = 2.0;
    v1.arr[2] = 3.0;
    // v1.arr[3] = 4.0;
    // v1.arr[4] = 5.5;
    vector<float> v2(3);
    v2.arr[0] = 1.0;
    v2.arr[1] = 2.0;
    v2.arr[2] = 3.0;
    cout << v1.product(v2);
    return 0;
}