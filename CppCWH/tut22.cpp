#include <iostream>
using namespace std;

class binary
{
    // private:
    // By default class ki members are private
    string s;
    void checkStr();

public:
    void setString();
    void onesComp();
};

void binary::setString()
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void binary::checkStr()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid input" << endl;
            exit(0);
        }
    }
}
void binary::onesComp()
{
    checkStr();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
}

int main()
{
    binary b1;
    b1.setString();
    // b1.checkStr();
    b1.onesComp();
    return 0;
}