#include <iostream>
#include <vector>
using namespace std;

vector<string> ans;

void powerSet(string st, int i, string cur)
{
    if (i == st.size())
    {
        ans.push_back(cur);
        return;
    }
    powerSet(st, i + 1, cur + st[i]);
    powerSet(st, i + 1, cur);
}

int main(int argc, char const *argv[])
{
    string st = "abc";
    powerSet(st, 0, "");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    cout << ans.size() << endl;
    return 0;
}
