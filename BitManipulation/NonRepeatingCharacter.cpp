#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{5, 4, 1, 4, 3, 1, 5};
    int res = 0;
    for (auto it : v)
    {
        res = res ^ it;
    }

    cout << res << endl;
    return 0;
}
