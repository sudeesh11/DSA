#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[smallestIndex] > arr[j])
            {
                smallestIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
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
    selectionSort(arr, size);
    displaySort(arr, size);
    return 0;
}