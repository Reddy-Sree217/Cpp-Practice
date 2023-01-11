#include <bits/stdc++.h>
using namespace std;

void func(int n, vector<int> &bits)
{
    int i = 0;
    while (n)
    {
        bits[i++] += n & 1;
        n = n >> 1;
    }
}

int main()
{
    vector<int> arr{2, 2, 1, 5, 7, 5, 5, 1, 1, 2};
    vector<int> bits(32, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        func(arr[i], bits);
    }

    for (auto i : bits)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < bits.size(); i++)
    {
        bits[i] = bits[i] % 3;
    }
    for (auto i : bits)
    {
        cout << i << " ";
    }
    cout << endl;

    int ans = 0;
    for (int i = 0; i < bits.size(); i++)
    {
        ans += bits[i] * pow(2, i);
    }
    cout << ans << endl;
    return 0;
}
