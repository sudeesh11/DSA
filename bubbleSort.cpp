#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        bool sortedValue = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sortedValue = true;
            }
        }
        if (sortedValue == false)
        {
            return;
        }
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
    bubbleSort(arr, size);
    displaySort(arr, size);
    return 0;
}