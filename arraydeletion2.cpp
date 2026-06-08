// using value(to be deleted)

#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, value;

    cout << "Before deletion ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter value you want to delete ";
    cin >> value;

    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j <= n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }

    n--;

    cout << "After deletion ";
    for (i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}