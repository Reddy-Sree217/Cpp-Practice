#include <iostream>
using namespace std;

bool isPalindromeusingRecursion(string st, int left, int right)
{
    if (left >= right)
        return true;
    if (st[left] != st[right])
        return false;
    return isPalindromeusingRecursion(st, left + 1, right - 1);
}

bool isPalindromeusingIteration(string st, int left, int right)
{
    while (left <= right)
    {
        if (st[left] != st[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string st = "abcdcba";
    cout << isPalindromeusingRecursion(st, 0, st.size() - 1);
    cout << endl;
    cout << isPalindromeusingIteration(st, 0, st.size() - 1);
    return 0;
}
