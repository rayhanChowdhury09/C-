#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

void BFS(int G, int v)
{
    queue<int> Q;
    Q.push(v);
    int *visited = new int[v];
    visited[v] = TRUE;
    while (!Q.empty())
    {
        int p = Q.front();
        Q.pop();

        for (int i = 0; i < G[v].size(); i++)
        {
            next = graph[v][i];
        }
        if (visited[next] == 0)
        {
            Q.push(next);
            visited[next] = 1;
        }
    }
}

void displayGraph(int **p, int n)
{
    cout << endl;
    << "Adjacency Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> m[7];
    int node, edge;
    cout << "Input Node and Edge Size: ";
    cin >> node >> edge;

    int u, v;
    cout << endl;
    << "Input All The Edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    displayGraph(m, node);
    cout << "Degrees Of This Matrix: " << endl;
    countDegree(m, node);

    return 0;
}