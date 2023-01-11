#include <bits/stdc++.h>
using namespace std;

int XORFunc(vector<int> tmp)
{
    for (int i = 1; i < tmp.size(); i++)
    {
        tmp[0] ^= tmp[i];
    }
    return tmp[0];
}

int func(vector<int> &arr, int K, int X)
{
    vector<int> tmp = arr;
    int ans = INT_MIN;
    for (int i = 0; i < K; i++)
    {
        tmp[i] -= X;
    }
    int tmpMax = XORFunc(tmp);
    ans = max(ans, tmpMax);
    for (int i = K; i < arr.size(); i++)
    {
        tmpMax ^= tmp[i - K];
        tmp[i - K] += X;
        tmpMax ^= tmp[i - K];
        tmp[i] -= X;
        tmpMax ^= tmp[i];
        ans = max(ans, tmpMax);
    }
    return ans;
}

int main()
{
    vector<int> arr{2, 5, 2};
    int K = 1;
    int X = 2;
    int ans = func(arr, K, X);
    cout << ans << endl;
    return 0;
}