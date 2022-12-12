#include<iostream>
#include<bits/stdc++.h>
#define s 100;
using namespace std;

void printgraph(int **p; int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int node,edge;
    //int m[s][s];

    cin>>node>>edge;
    int m[node][node];
    
    //Dynamic memory allocation
    int **m=new int*[node];
    for(int i=0; i<node; i++)
    {
        m[i]= new int[node];
    }
    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            p[i][j]=0;

        }
    }
    int u,v;
    for (int i=0; i<edge; i++)
    {
        cin>>u,v;
        m[u][v]=m[v][u]=1;

    }
    displaygraph(m, node);
    return 0;


}