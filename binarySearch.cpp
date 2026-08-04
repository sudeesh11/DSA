#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int value)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high-low) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            low= mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 7, 12, 18, 24, 29, 35, 41, 46, 52, 58, 63, 69, 74, 81, 87, 92, 96, 101, 108};
    int size = sizeof(arr) / sizeof(int);
    int value;
    cout << "Enter element to search: ";
    cin >> value;
    cout << "The index is " << binarySearch(arr, size, value) << "\n";
    return 0;
}