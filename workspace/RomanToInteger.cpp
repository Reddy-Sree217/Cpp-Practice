#include <iostream>
#include <string>
using namespace std;

class Roman
{
    int integer = 0;
    int *value;
    string roman;
    int length;

public:
    void setRoman(string);
    void convertRomanToInt(void);
    void printValue(void);
};

void Roman::setRoman(string roman)
{
    this->roman = roman;
    length = roman.length();
}

void Roman::convertRomanToInt(void)
{
    value = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
    {
        if (roman[i] == 'M')
        {
            value[i] = 1000;
        }

        else if (roman[i] == 'D')
        {
            value[i] = 500;
        }

        else if (roman[i] == 'C')
        {
            value[i] = 100;
        }
        else if (roman[i] == 'L')
        {
            value[i] = 50;
        }
        else if (roman[i] == 'X')
        {
            value[i] = 10;
        }
        else if (roman[i] == 'V')
        {
            value[i] = 5;
        }
        else if (roman[i] == 'I')
        {
            value[i] = 1;
        }
    }
}

void Roman::printValue(void)
{
    // for (int i = 0; i < length; i++)
    // {
    //     cout << value[i] << endl;
    // }
    for(int i=0;i<length-1;i++){
        if(value[i]>=value[i+1]){
            integer+=value[i];
        }
        else{
            integer-=value[i];
        }
    }
    integer += value[length-1];
    cout<<integer<<endl;

}

int main()
{
    Roman test1;
    test1.setRoman("MCMXCIV");
    test1.convertRomanToInt();
    test1.printValue();
    return 0;
}