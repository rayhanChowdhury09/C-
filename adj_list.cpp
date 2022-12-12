#include <iostream>
using namespace std;

void printgraph(vector<int> p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "---->";
        for (int j = 0; j < p[i].size(); j++)
        {
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<int> m[7];

    int u, v;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;

        m[u].push_back[v];
        m[v].push_back[u];
    }
    displaygraph(m, node);
    return 0;
}