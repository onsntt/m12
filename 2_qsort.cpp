#include <iostream>


int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    std::swap(arr[pivotIndex], arr[start]);
std::cout << "ex start is pivot " << arr[pivotIndex] << "ex-pivot index is now start " << arr[start] << "\n";
    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            std::swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{

    int arr[] = {9, 3, 4, 2, 1};
    int n = 5;
    for (int i = 0; i<5; i++)
    {
      std::cout << arr[i] << ", ";

    }
    std::cout << "\n";

        quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}