#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0)); // seeds
    freopen("100-int.txt", "r", stdin);
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 1000; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}