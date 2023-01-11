#include <bits/stdc++.h>
using namespace std;

int maxSumSubSequenceMemoization(vector<int> &arr, int index, vector<int> &dp)
{
    if (index == 0)
        return arr[index];
    else if (index < 0)
        return 0;
    if (dp[index] != -1)
        return dp[index];
    int pick = arr[index] + maxSumSubSequenceMemoization(arr, index - 2, dp);
    int notPick = 0 + maxSumSubSequenceMemoization(arr, index - 1, dp);

    return dp[index] = max(pick, notPick);
}

int main()
{
    vector<int> arr{2, 1, 4, 9};
    int size = arr.size();

    // Memoization

    vector<int> dp(size + 1, -1);
    int maxSum = maxSumSubSequenceMemoization(arr, arr.size() - 1, dp);
    cout << maxSum << endl;

    // Tabulation
    vector<int> tb(size, 0);
    tb[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        int pick = arr[i];
        if (i > 1)
            pick += tb[i - 2];
        int notpick = 0 + tb[i - 1];

        tb[i] = max(pick, notpick);
    }

    cout << tb[size - 1] << endl;

    // Space Optimization

    int prevprev = 0;
    int prev = arr[0];

    for (int i = 1; i < size; i++)
    {
        int pick = arr[i] + prevprev;
        int notpick = 0 + prev;

        int curr = max(pick, notpick);

        prevprev = prev;
        prev = curr;
    }

    cout << prev << endl;

    return 0;
}