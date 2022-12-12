#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printList(int *p, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}
int *mergeList(int *a, int *b, int n, int m)
{
    int *L = new int[n + m];
    int i = 0;
    int j = 0;
    int k = 0;
    int *c = new int[n + m];

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
        }
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (i < m)
    {
        c[k++] = b[j++];
    }
    return c;
}
void display(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {2, 3, 45, 6, 15, 20};
    int b[] = {3, 5, 87, 1, 89, 25};
    printList(a, 6);
    printList(b, 6);
    int *c = mergeList(a, b, 6, 6);
    display(c, 12);
}