#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int counter;
    int itemPrice[100];

public:
    void setPrice();
    void initCounter();
    void dispalyPrice();
};

void Shop::initCounter()
{
    counter = 0;
}

void Shop::setPrice()
{
    // do
    // {
    // cout << "Enter id of the item: " << endl;
    // cin >> itemId[counter];
    // cout << "Enter price of the item: " << endl;
    // cin >> itemPrice[counter];
    // counter++;
    // } while (cin);

    cout << "Enter id of the item: " << endl;
    cin >> itemId[counter];
    cout << "Enter price of the item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::dispalyPrice()
{
    cout << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << itemId[i] << "      " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop sm1;
    sm1.initCounter();
    sm1.setPrice();
    sm1.setPrice();
    sm1.setPrice();
    sm1.setPrice();
    sm1.setPrice();
    sm1.dispalyPrice();
    return 0;
}