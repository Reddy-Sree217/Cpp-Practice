#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> inp{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    int rowSize = inp.size();
    int colSize = inp[0].size();

    vector<vector<int>> visited(rowSize, vector<int>(colSize, 0));
    vector<vector<int>> ans(rowSize, vector<int>(colSize));
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (inp[i][j] == 1)
            {
                visited[i][j] = 1;
                q.push({{i, j}, 0});
            }
        }
    }

    vector<int> temp1{-1, 0, 1, 0};
    vector<int> temp2{0, 1, 0 - 1};

    while (!q.empty())
    {
        int nrow = q.front().first.first;
        int ncol = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        ans[nrow][ncol] = steps;
        for (int i = 0; i < 4; i++)
        {
            if (nrow + temp1[i] >= 0 && nrow + temp1[i] < rowSize && ncol + temp2[i] >= 0 && ncol + temp2[i] < colSize && visited[nrow + temp1[i]][ncol + temp2[i]] == 0)
            {
                visited[nrow + temp1[i]][ncol + temp2[i]] = 1;
                q.push({{nrow + temp1[i], ncol + temp2[i]}, steps + 1});
            }
        }
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}