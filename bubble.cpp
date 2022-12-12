#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    freopen("100-int.text", "r", stdin);
    int n;
    int i, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Bubble Sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}