#include <bits/stdc++.h>
using namespace std;

void printvec(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void func(vector<vector<int>> &arr, vector<vector<int>> &ans)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 0)
                ans[i][j] = 0;
            else
            {
                for (int a = 0; a < arr.size(); a++)
                {
                    for (int b = 0; b < arr[a].size(); b++)
                    {
                        if (arr[a][b] == 0)
                        {

                            int temp = abs(a - i) + abs(b - j);
                            ans[i][j] = min(ans[i][j], temp);
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 1, 1},
    };
    // printvec(arr);
    vector<vector<int>> ans(arr.size(), vector<int>(arr[0].size(), INT_MAX));
    func(arr, ans);
    printvec(ans);
    return 0;
}