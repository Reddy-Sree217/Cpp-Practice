#include <iostream>
#include <vector>
using namespace std;

void func(int openCount, int closeCount, int N, vector<char> &ds, int &ans)
{
    if (ds.size() == N)
        ans++;

    if (openCount <= N / 2)
    {
        ds.push_back('(');
        func(openCount + 1, closeCount, N, ds, ans);
        ds.pop_back();
    }
    if (closeCount < openCount)
    {
        ds.push_back(')');
        func(openCount, closeCount + 1, N, ds, ans);
        ds.pop_back();
    }
}

int main()
{
    return 0;
    int n = 4;
    vector<char> ds;
    int ans = 0;
    func(0, 0, 4, ds, ans);
    cout << ans << endl;
}