#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for (auto it : v)
        cout << it << " ";
}

static bool cmp(int a, int b)
{
    return b < a;
}

int main()
{
    vector<int> arr{2, 1, 3};
    sort(arr.begin(), arr.end(), cmp);
    print(arr);
    cout << endl;
    return 0;
}