#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void print(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
    cout << endl;
}

void subseq(int i, vector<int> &v)
{
    if (i >= v.size())
    {
        print(ans);
        return;
    }
    ans.push_back(v[i]);
    subseq(i + 1, v);
    ans.pop_back();
    subseq(i + 1, v);
}

int main(int argc, char const *argv[])
{
    vector<int> v = {3, 1, 2};
    subseq(0, v);
    return 0;
}
