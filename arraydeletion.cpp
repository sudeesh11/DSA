// using position

#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5, i, value, pos;

    cout << "Before deletion ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter position at which you wish to delete the value ";
    cin >> pos;

    value = arr[pos];

    for (i = pos; i <= n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "After deletion ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}