#include <iostream>
#include <vector>
using namespace std;

void adj(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

vector<int> ans;

void dfs(int node, vector<int> adj[], vector<bool> &visited)
{
    ans.push_back(node);
    visited[node] = true;
    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            dfs(it, adj, visited);
        }
    }
}

void printGraph(void)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int size = 7;
    vector<int> adjList[size];
    adj(adjList, 0, 1);
    adj(adjList, 0, 4);
    adj(adjList, 1, 2);
    adj(adjList, 1, 3);
    adj(adjList, 2, 5);
    adj(adjList, 3, 6);
    adj(adjList, 3, 4);
    adj(adjList, 5, 6);
    vector<bool> visited(size, false);
    for (int i = 0; i < size; i++)
    {
        if (!visited[i])
            dfs(i, adjList, visited);
    }
    printGraph();
    return 0;
}
