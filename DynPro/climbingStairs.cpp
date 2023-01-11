#include <bits/stdc++.h>
using namespace std;

int climbingStairsFuncMemoization(int n, vector<int> &dp)
{
    if (n == 0)
        return 1;

    if (dp[n] != -1)
        return dp[n];
    int way1 = 0;
    int way2 = 0;

    way1 = climbingStairsFuncMemoization(n - 1, dp);
    if (n > 1)
        way2 = climbingStairsFuncMemoization(n - 2, dp);

    return dp[n] = way1 + way2;
}

int climbingStairsFuncTabulation(int n, vector<int> &dp)
{
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int way1 = dp[i - 1];
        int way2 = dp[i - 2];
        dp[i] = way1 + way2;
    }
    return dp[n];

    // SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION

    // int prevprev = 1;
    // int prev = 1;

    // for (int i = 2; i <= n; i++)
    // {
    //     int curr = prevprev + prev;
    //     prevprev = prev;
    //     prev = curr;
    // }
    // return prev;
}

int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    cout << "Number of ways(Memoization) to go to the " << n << " th stair is: " << climbingStairsFuncMemoization(n, dp) << endl;
    cout << "Number of ways(Tabulation) to go to the " << n << " th stair is: " << climbingStairsFuncTabulation(n, dp) << endl;
    return 0;
}