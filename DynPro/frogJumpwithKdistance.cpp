#include <bits/stdc++.h>
using namespace std;

int minEnergyReq(int index, vector<int> &arr, vector<int> &dp, int k)
{
    if (index == 0)
        return 0;
    if (dp[index] != -1)
        return dp[index];

    // int way1 = abs(arr[index] - arr[index - 1]) + minEnergyReq(index - 1, arr, dp, k);
    // int way2 = INT_MAX;
    // if (index > 1)
    //     way2 = abs(arr[index] - arr[index - 2]) + minEnergyReq(index - 2, arr, dp, k);
    // return dp[index] = min(way1, way2);

    int ans = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        int way = INT_MAX;
        if (index - j >= 0)
        {
            way = abs(arr[index] - arr[index - j]) + minEnergyReq(index - j, arr, dp, k);
        }
        ans = min(ans, way);
    }
    return dp[index]=ans;
}

int main()
{
    vector<int> arr{4, 10, 5, 7, 16};
    vector<int> dp(arr.size() + 1, -1);
    int k = 2;
    int minEnergy = minEnergyReq(arr.size() - 1, arr, dp, k);
    cout << minEnergy << endl;
    return 0;
}