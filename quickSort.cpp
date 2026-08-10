#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start + 1;
    int j = end;

    while (i <= j)
    {
        while (i <= end && arr[i] <= pivot)
        {
            i++;
        }
        while (j >= start && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[start];
    arr[start] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivotPosition = partition(arr, start, end);

        quickSort(arr, start, pivotPosition - 1);
        quickSort(arr, pivotPosition + 1, end);
    }
}

void displaySort(int arr[], int size)
{
    cout << "Sorted array: ";
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 33, 2, 49, 83, 23, 5, 4, 69};
    quickSort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);
    displaySort(arr, (sizeof(arr) / sizeof(int)) - 1);
    return 0;
}