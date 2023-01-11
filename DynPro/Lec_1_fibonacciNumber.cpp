#include <bits/stdc++.h>
using namespace std;

int fibonacciWithMemoization(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibonacciWithMemoization(n - 1, dp) + fibonacciWithMemoization(n - 2, dp);
}

int fibonacciWithTabulation(int n, vector<int> &dp)
{

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];

    // SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION space optimization SPACE OPTIMIZATION

    // int prevprev = 0;
    // int prev = 1;
    // if (n == 0)
    //     return 0;
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
    int n = 11;
    vector<int> dp(n + 1, -1);
    int fibNum = fibonacciWithMemoization(n, dp);
    cout << "The " << n << " th fibonacci number by memoization is: " << fibNum << endl;

    vector<int> dpTabulation(n + 1);
    cout << "The " << n << " th fibonacci number by Tabulation is: " << fibonacciWithTabulation(n, dpTabulation) << endl;
    return 0;
}