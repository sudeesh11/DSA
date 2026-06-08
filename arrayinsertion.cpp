#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, value;

    cout << "Before insertion: ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter value you want to save and at which position ";
    cin >> value >> pos;

    for (i = n - 1; i > pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i] = value;

    n++;

    cout << "\nAfter insertion: ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}