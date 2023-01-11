#include <iostream>
#include <vector>
using namespace std;
void prepadjList(vector<int> vec[], int u, int v)
{
    vec[u].push_back(v);
    vec[v].push_back(u);
}
int main(int argc, char const *argv[])
{
    int size = 5;
    vector<int> adjList[size];
    prepadjList(adjList, 0, 1);
    prepadjList(adjList, 1, 2);
    prepadjList(adjList, 1, 4);
    prepadjList(adjList, 2, 3);
    prepadjList(adjList, 3, 4);
    return 0;
}
