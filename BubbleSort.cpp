#include <iostream>
using namespace std;

int main()
{
    int n;
    int i, j;
    cout << "Enter size of an array : ";
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