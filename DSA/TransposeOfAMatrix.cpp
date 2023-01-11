#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (i >= j)
                continue;
            else
                swap(mat[i][j], mat[j][i]);
        }
    }
}

void printMatrix(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(mat);
    printMatrix(mat);
    return 0;
}
