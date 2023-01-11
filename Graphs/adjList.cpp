#include <bits/stdc++.h>
using namespace std;

void addAdj(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void print(int V, vector<int> adjList[])
{
    cout << "Adj List is: " << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "head";
        for (auto it : adjList[i])
        {
            cout << " -> " << it;
        }
        cout << endl;
    }
}

int main()
{
    int V = 5;
    vector<int> adjList[V];
    addAdj(adjList, 0, 1);
    addAdj(adjList, 0, 4);
    addAdj(adjList, 1, 2);
    addAdj(adjList, 1, 3);
    addAdj(adjList, 1, 4);
    addAdj(adjList, 2, 3);
    addAdj(adjList, 3, 4);
    print(V, adjList);
    return 0;
}