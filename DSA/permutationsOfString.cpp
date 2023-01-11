#include <iostream>
using namespace std;

void permute(string st, int l, int r)
{
    if (l == r)
    {
        cout << st << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(st[i], st[l]);
        permute(st, l + 1, r);
        swap(st[i], st[l]);
    }
}

int main()
{
    string st = "abc";
    permute(st, 0, 2);
    return 0;
}