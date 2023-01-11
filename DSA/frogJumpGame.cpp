#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &heights, int n, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int f1 = f(heights, n - 1, dp) + abs(heights[n] - heights[n - 1]);
    int f2 = 100;
    if (n > 1)
        f2 = f(heights, n - 2, dp) + abs(heights[n] - heights[n - 2]);
    return min(f1, f2);
}

int main()
{
    vector<int> heights = {30, 10, 60, 10, 60, 50};
    int n = heights.size();
    // Memoization
    //  vector<int> dp(n, -1);
    //  cout << f(heights, n - 1, dp) << endl;

    // Tabulation
    //  vector<int> dp(n);
    //  dp[0] = 0;
    //  for (int i = 1; i < n; i++)
    //  {
    //      int fs = dp[i - 1] + abs(heights[i] - heights[i - 1]);
    //      int ss = INT_MAX;
    //      if (i > 1)
    //          ss = dp[i - 2] + abs(heights[i] - heights[i - 2]);
    //      dp[i] = min(fs, ss);
    //  }
    //  cout << dp[n - 1] << endl;

    int prev = 0;
    int prev2 = 0;
    for (int i = 1; i < n; i++)
    {
        int fs = prev + abs(heights[i] - heights[i - 1]);
        int ss = INT_MAX;
        if (i > 1)
            ss = prev2 + abs(heights[i] - heights[i - 2]);
        int curi = min(fs, ss);
        prev2 = prev;
        prev = curi;
    }
    cout << prev << endl;

    return 0;
}
