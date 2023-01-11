#include <iostream>
using namespace std;

class bankDeposit
{
    int principleAmount;
    int period;
    float interestRate;
    float returnAmount;

public:
    bankDeposit(void);
    bankDeposit(int, int, int);
    bankDeposit(int, int, float);
    void depositCalculator();
    void printAmount();
};

bankDeposit::bankDeposit(void)
{
    principleAmount = 0;
    period = 0;
    interestRate = 0;
}
bankDeposit::bankDeposit(int p, int y, int r)
{
    principleAmount = p;
    period = y;
    interestRate = (float)r / 100;
    depositCalculator();
}

bankDeposit::bankDeposit(int p, int y, float r)
{
    principleAmount = p;
    period = y;
    interestRate = r;
    depositCalculator();
}

void bankDeposit::depositCalculator(void)
{
    returnAmount = principleAmount;
    for (int i = 0; i < period; i++)
    {
        returnAmount += returnAmount * interestRate;
    }
    printAmount();
}

void bankDeposit::printAmount(void)
{
    cout << "Final expected amount is: " << returnAmount << endl;
}

int main()
{
    bankDeposit cust1(3000000, 5, 15);
    return 0;
}