#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <queue>
#define m 100
using namespace std;

vector<int> g[m];
int visited[m];
int dist[m];

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    visited[v] = 1;
    dist[v] = 0;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int i = 0; i < g[p].size(); i++)
        {
            int next = g[p][i];
            if (visited[next] == 0)
            {
                q.push(next);
                visited[next] = 1;
                dist[next] = dist[p] + 1;
            }
        }
    }
}

void printGraph(vector<int> p[], int node)
{

    cout << endl;
    for (int i = 0; i < node; i++)
    {
        cout << i << "-->";
        for (int j = 0; j < g[i].size(); j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int node, edge;

    cin >> node >> edge;
    int u, v;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    printGraph(g, node);

    bfs(0);

    cout << "Distance from 0 : \n";

    for (int i = 0; i < node; i++)
    {
        cout << i << " " << dist[i] << endl;
    }
}

/*
7 11

0 1
0 3
1 3
1 5
2 3
2 5
4 3
4 2
4 6
5 1
5 2
*/