#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cout << "Enter size of an array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                m = j;
            }
        }
        swap(arr[i], arr[m]);
    }
    cout << "Selection sort :";
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " ";
    }
}