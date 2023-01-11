#include <bits/stdc++.h>
using namespace std;

void addAdj(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void printAdjList(int V, vector<int> adjList[])
{
    cout << "Adj List is: " << endl;
    for (int i = 1; i <= V; i++)
    {
        cout << "head -> " << i;
        for (auto it : adjList[i])
        {
            cout << " -> " << it;
        }
        cout << endl;
    }
}

void dfs(int node, vector<int> adjList[], vector<int> &visited, vector<int> &dfsTraversal)
{
    dfsTraversal.push_back(node);
    visited[node] = 1;
    for (auto it : adjList[node])
    {
        if (!visited[it])
            dfs(it, adjList, visited, dfsTraversal);
    }
}

void printTraversal(vector<int> &dfsTraversal)
{
    for (int i = 0; i < dfsTraversal.size(); i++)
    {
        cout << dfsTraversal[i] << " ";
    }
    cout << endl;
}

int main()
{
    int V = 10;
    vector<int> adjList[V + 1];
    addAdj(adjList, 1, 3);
    addAdj(adjList, 3, 4);
    addAdj(adjList, 4, 6);
    addAdj(adjList, 6, 8);
    addAdj(adjList, 2, 9);
    addAdj(adjList, 5, 7);
    addAdj(adjList, 7, 10);
    printAdjList(V, adjList);

    vector<int> visited(V + 1, 0);
    vector<int> dfsTraversal;
    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            dfs(i, adjList, visited, dfsTraversal);
        }
    }
    printTraversal(dfsTraversal);
    return 0;
}