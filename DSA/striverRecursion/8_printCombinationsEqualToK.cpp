#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void func(int i, vector<int> &arr, int target)
{
    if (target < 0 || i == arr.size())
    {
        if (target == 0)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    ans.push_back(arr[i]);
    func(i, arr, target - arr[i]);
    ans.pop_back();
    func(i+1, arr, target);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    func(0, arr, target);
    return 0;
}
