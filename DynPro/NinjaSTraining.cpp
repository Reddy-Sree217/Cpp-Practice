#include <bits/stdc++.h>
using namespace std;

// Memoization
int ninjaTraining(vector<vector<int>> &arr, int index, int lastTaskPerformed, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            if (i != lastTaskPerformed)
                maxi = max(maxi, arr[index][i]);
        }
        return maxi;
    }

    if (dp[index][lastTaskPerformed] != -1)
        return dp[index][lastTaskPerformed];

    int ans = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (i != lastTaskPerformed)
            ans = max(ans, arr[index][i] + ninjaTraining(arr, index - 1, i, dp));
    }
    return dp[index][lastTaskPerformed] = ans;
}

int main()
{
    vector<vector<int>> arr{{2, 1, 3}, {3, 4, 6}, {10, 1, 6}, {8, 3, 7}};
    int lastTaskPerformed = 3;

    vector<vector<int>> dp(arr.size() + 1, vector<int>(lastTaskPerformed + 1, -1));

    int maxMeritPoints = ninjaTraining(arr, arr.size() - 1, lastTaskPerformed, dp);
    cout << "Max Earning Points Of Ninja is : " << maxMeritPoints << endl;
    return 0;
}