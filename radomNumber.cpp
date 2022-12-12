#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0)); // seeds
    freopen("100-int.txt", "w", stdout);
    for (int i = 0; i < 1000; i++)

    {
        // int a = rand();
        // cout << a << " " << a % 6 << endl;
        // cout << rand() % 6 + 1 << endl;
        //---For save---
        cout << rand() % 1000 + 1 << endl;
    }
    return 0;
}