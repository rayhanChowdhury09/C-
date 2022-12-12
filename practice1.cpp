#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void bubbleSort(int *a, int s)
{

    for (int si = 0; si < s - 1; si++)
    {
        for (int ci = 0; ci < (s - 1) - si; ci++)
        {
            if (a[ci] > a[ci + 1])
            {
                swap(a[ci], a[ci + 1]);
            }
        }
    }
}

void display(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    srand(time(0));
    int n;
    cout << "Enter Size: ";
    cin >> n;
    while (n <= 100000)
    {
        int *A = new int[n];
        // Generate Random Number.
        for (int i = 0; i < n; i++)
        {
            A[i] = rand() % 10000;
        }

        auto start1 = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        bubbleSort(A, n);

        cout << ".....................Time taken by 1st Algorithm......................." << endl;
        auto end1 = chrono::high_resolution_clock::now();
        double time_taken1 = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
        cout << "Data Size: " << n << " Time taken by program is : " << fixed
             << time_taken1 << setprecision(10);
        cout << " sec" << endl;
        n *= 10;
    }

    return 0;
}
