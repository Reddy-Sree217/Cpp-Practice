#include <bits/stdc++.h>
using namespace std;
int frogJumpWithMemoization(vector<int> &nums, int index, vector<int> &dp)
{
    if (index == 0)
        return 0;
    if (dp[index] != -1)
        return dp[index];

    int way1 = abs(nums[index] - nums[index - 1]) + frogJumpWithMemoization(nums, index - 1, dp);
    int way2 = INT_MAX;
    if (index > 1)
        way2 = abs(nums[index] - nums[index - 2]) + frogJumpWithMemoization(nums, index - 2, dp);
    return dp[index] = min(way1, way2);
}

int frogJumpWithTabulation(vector<int> &nums, vector<int> &dp)
{
    dp[0] = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int way1 = INT_MAX;
        int way2 = INT_MAX;
        way1 = dp[i - 1] + abs(nums[i] - nums[i - 1]);
        if (i > 1)
            way2 = dp[i - 2] + abs(nums[i] - nums[i - 2]);
        dp[i] = min(way1, way2);
    }
    // return dp[nums.size() - 1];
    // SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION

    int prevprev = 0;
    int prev = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int way1 = prev + abs(nums[i] - nums[i - 1]);
        int way2 = INT_MAX;
        if (i > 1)
            way2 = prevprev + abs(nums[i] - nums[i - 2]);

        int curr = min(way1, way2);
        prevprev = prev;
        prev = curr;
    }
    return prev;
}

int main()
{
    vector<int> nums{4, 8, 3, 10, 4, 4};
    int size = nums.size();
    vector<int> dp(size + 1, -1);
    int energyRequired_Memoization = frogJumpWithMemoization(nums, size - 1, dp);
    cout << "Energy required(Memoization) for the frog is: " << energyRequired_Memoization << endl;

    int energyRequired_Tabulation = frogJumpWithTabulation(nums, dp);
    cout << "Energy required(Tabulation) for the frog is: " << energyRequired_Tabulation << endl;

    return 0;
}