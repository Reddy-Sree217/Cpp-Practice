// #include <iostream>
// #include <queue>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// void addEdge(vector<int> vec[], int u, int v)
// {
//     vec[u].push_back(v);
//     // vec[v].push_back(u);
// }
// vector<int> ans;
// void bfsTraversal(vector<int> vec[], int N)
// {
//     unordered_map<int, bool> visited;
//     for (int i = 0; i < N; i++)
//     {
//         if (!visited[i])
//         {
//             queue<int> q;
//             q.push(i);
//             ans.push_back(i);
//             while (!q.empty())
//             {
//                 int node = q.front();
//                 q.pop();
//                 for (int i = 0; i < vec[node].size(); i++)
//                 {
//                     if (!visited[vec[node][i]])
//                     {
//                         visited[vec[node][i]] = true;
//                         ans.push_back(vec[node][i]);
//                         q.push(vec[node][i]);
//                     }
//                 }
//             }
//         }
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int size = 5;
//     vector<int> adj[size];
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 2);
//     addEdge(adj, 0, 3);
//     addEdge(adj, 2, 4);
//     // vector<int> ans;
//     bfsTraversal(adj, size);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adjList[], int u, int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

vector<int> ans;

void bfsTraversal(int V, vector<int> adjList[])
{
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty())
            {
                int temp = q.front();
                q.pop();
                ans.push_back(temp);
                for (int j = 0; j < adjList[temp].size(); j++)
                {
                    if (!visited[adjList[temp][j]])
                    {
                        visited[adjList[temp][j]] = true;
                        q.push(adjList[temp][j]);
                    }
                }
            }
        }
    }
}
void bfsOfGraph(int V, vector<int> adj[])
{
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) {
        if (!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                ans.push_back(g_node);
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
}

void printList()
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N = 5;
    vector<int> adjList[N];
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 0, 3);
    addEdge(adjList, 2, 4);
    bfsTraversal(N, adjList);
    // bfsOfGraph(N, adjList);
    printList();
    return 0;
}
