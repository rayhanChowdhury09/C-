#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    freopen("100-int.txt", "r", stdin);

    int i, j;
    int arr[1000];
    for (int i = 0; i < 1000; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Bubble Sort : ";
    for (int i = 0; i < 1000; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}