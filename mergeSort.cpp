#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end);

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

void merge(int arr[], int start, int mid, int end)
{
    int temp[end - start + 1], i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    for (int x = 0; x < k; x++)
    {
        arr[start + x] = temp[x];
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
    mergeSort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);
    displaySort(arr, (sizeof(arr) / sizeof(int)) - 1);
    return 0;
}