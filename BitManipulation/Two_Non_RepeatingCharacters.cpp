#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{5, 4, 2, 1, 3, 2, 5, 4};
    int ans = 0;
    for (auto it : arr)
    {
        ans = ans ^ it;
    }

    vector<int> twoNumbers;
    int temp = ans;
    int pos = 0;

    while (temp)
    {
        if (temp & 1)
            break;
        pos++;
        temp = temp >> 1;
    }
    temp = ans;

    for (auto it : arr)
    {
        int t = it >> pos;
        if (t & 1)
        {
            cout << it << " ";
            temp = temp ^ it;
        }
    }
    cout << endl
         << temp << endl;
    ans = ans ^ temp;
    cout << ans << endl;
    return 0;
}