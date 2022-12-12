#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, r, c, j;
int **Matrix(int r, int c)
{
    int **m = new int *[r];
    for (int i = 0; i < c; i++)
    {
        m[i] = new int[c];
    }
    srand(time(0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j] = rand() % 10;
        }
    }
    return m;
}

void printMatrix(int **m, int rows, int colums)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
// addition multiplication subtraction hw and push into github

int main()
{
    srand(time(0));
    int **A = Matrix(5, 5);
    // addValuse(A, 5, 5);
    printMatrix(A, 5, 5);
    cout << endl;
    int **B = Matrix(5, 5);
    // addValuse(B, 5, 5);
    printMatrix(B, 5, 5);

    return 0;
}