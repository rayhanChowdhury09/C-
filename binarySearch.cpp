#include <iostream>
using namespace std;
int main()
{
    int item;
    int n, i;
    int position = -1;
    cout << "Enter size of an array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Search item : ";
    cin >> item;

    int fi = 0, li = n - 1;
    while (fi <= li)
    {
        int mi = (fi + li) / 2;
        if (item < arr[mi])
        {
            li = mi - 1;
        }
        else if (item > arr[mi])
        {
            fi = mi + 1;
        }
        else
        {
            position = mi;
            break;
        }
    }
    if (position == -1)
    {
        cout << "Item not found !!";
    }
    else
    {
        cout << "Item found at " << position << endl;
    }
    return 0;
}