#include <bits/stdc++.h>
using namespace std;

void addAdj(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void printAdjList(int V, vector<int> adjList[])
{
    cout << "AdjList is: " << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "head -> " << i;
        for (auto it : adjList[i])
        {
            cout << " -> " << it;
        }
        cout << endl;
    }
}

vector<int> bfs(int V, vector<int> adjList[])
{
    vector<int> bfsTraversal;
    vector<int> visited(V + 1, 0);
    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            queue<int> q;
            q.push(i);
            visited[i] = 1;
            while (!q.empty())
            {
                int temp = q.front();
                bfsTraversal.push_back(temp);
                q.pop();
                for (auto it : adjList[temp])
                {
                    if (!visited[it])
                    {
                        q.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }
    }
    return bfsTraversal;
}

void printBFSTraversal(vector<int> &arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
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

    vector<int> bfsTraversal;

    vector<int> visited(V, 0);

    bfsTraversal = bfs(V, adjList);
    printBFSTraversal(bfsTraversal);

    return 0;
}