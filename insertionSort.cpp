#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}

void displaySort(int arr[], int size)
{
    cout << "Sorted array: ";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {4, 1, 2, 5, 3};
    int size = sizeof(arr) / sizeof(int);
    insertionSort(arr, size);
    displaySort(arr, size);
    return 0;
}