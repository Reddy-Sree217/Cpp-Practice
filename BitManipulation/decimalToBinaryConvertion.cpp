#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num = 5;
    vector<int> ans;
    while (num)
    {
        ans.push_back(num % 2);
        num /= 2;
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}