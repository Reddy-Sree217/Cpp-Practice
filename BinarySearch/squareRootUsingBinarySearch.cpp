#include <iostream>
using namespace std;

int binarySearchForFindingSqaureRoot(int n)
{
    if (n <= 0)
        return 0;
    int left = 1;
    int right = n;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (mid * mid == n)
            return mid;
        else if (mid * mid > n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return right;
}

double decimalPart(int num, int sqRt, int precision)
{
    double factor = 1;
    double ans = sqRt;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= num; j += factor)
            ans = j;
    }
    return ans;
}

int main()
{
    int num = 83;
    int sqRootOfNum = binarySearchForFindingSqaureRoot(num);
    cout << "Sqaure root of num(Integer Part) is: " << sqRootOfNum << endl;

    cout << "Sqaure root of num(with decimal part) is: " << decimalPart(num, sqRootOfNum, 3) << endl;
    return 0;
}