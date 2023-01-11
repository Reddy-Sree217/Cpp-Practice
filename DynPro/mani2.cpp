#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool f(int n, int p)
{
    if (n <= 0)
        return false;
    int count = 0;
    if (n == 2 && p == 1)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            if (n % i == 0)
                count++;
        }
    }
    return p == count;
}

bool func(int i1, int j1, int i2, int j2, vector<vector<int>> &grid, vector<vector<int>> &visited, int p)
{
    visited[i2][j2] = 1;
    if (!f(grid[i2][j2], p))
        return false;
    if (i1 == i2 && j1 == j2)
        return true;
    vector<int> delRow{-1, 0, 1, 0};
    vector<int> delCol{0, 1, 0, -1};
    for (int i = 0; i < 4; i++)
    {
        int nrow = i2 + delRow[i];
        int ncol = j2 + delCol[i];
        if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && !visited[nrow][ncol])
            func(nrow, ncol, i2, j2, grid, visited, p);
    }
}

int main()
{
    vector<vector<int>> grid{{5, 2, 3}, {11, 0, -1}, {7, 12, 35}};

    vector<vector<int>> queries{{1, 3, 3, 1}};
    int p = 1;
    vector<string> ans;
    for (auto it : queries)
    {
        int i1 = it[0];
        int j1 = it[1];
        int i2 = it[2];
        int j2 = it[3];
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
        if (func(i1, j1, i2, j2, grid, visited, p))
            ans.push_back("Yes");
        else
            ans.push_back("No");
    }
    for (auto it : ans)
        cout << it << " ";
    return 0;
}