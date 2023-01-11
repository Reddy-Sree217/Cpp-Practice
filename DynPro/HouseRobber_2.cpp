#include <bits/stdc++.h>
using namespace std;

int plan(vector<int> &nums, int index, int base, vector<int> &dp)
{
    if (index == base)
        return nums[base];
    if (index < base)
        return 0;
    if (dp[index] != -1)
        return dp[index];
    int rob = nums[index];
    if (index - 2 >= base)
        rob += plan(nums, index - 2, base, dp);

    int dontRob = 0 + plan(nums, index - 1, base, dp);

    return dp[index] = max(rob, dontRob);
}

int main()
{
    vector<int> nums{6, 7, 1, 3, 8, 2, 4};
    vector<int> dp1(nums.size() + 1, -1);
    int maxAmountCanRob1 = plan(nums, nums.size() - 2, 0, dp1);
    vector<int> dp2(nums.size() + 1, -1);
    int maxAmountCanRob2 = plan(nums, nums.size() - 1, 1, dp2);
    int maxAmountCanRob = max(maxAmountCanRob1, maxAmountCanRob2);
    cout << "Max amount Robbed: " << maxAmountCanRob << endl;
}