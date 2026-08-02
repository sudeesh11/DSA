
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 33, 2, 49, 83, 23, 5, 4, 69};
    int size = sizeof(arr) / sizeof(int);
    int value;
    cout << "Enter element to search: ";
    cin >> value;
    cout << "The index is " << linearSearch(arr, size, value) << "\n";
    return 0;
}