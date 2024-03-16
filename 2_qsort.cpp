#include <iostream>

// Zadacha 2
// this is chisto normalnaya solyanka 
//first of all - get pivot position, after that - swaps


int partition(float arr[], int start, int end)
{

    float pivot = arr[start];

    int count = 0;
    for (int u = start + 1; u <= end; u++)
    {
        if (arr[u] >= pivot)
            count++;
    }

    // Get pivot position
    int pivotIndex = start + count;
    std::swap(arr[pivotIndex], arr[start]);
    //std::cout << "ex-start is pivot now - " << arr[pivotIndex] << ", ex-pivot is now start - " << arr[start] << "\n";
    // Sorting left and right parts 
    int e = start, j = end;

    while (e < pivotIndex && j > pivotIndex)
    {

        while (arr[e] >= pivot)
        {
            e++;
        }

        while (arr[j] < pivot)
        {
            j--;
        }

        if (e < pivotIndex && j > pivotIndex)
        {
            std::swap(arr[e], arr[j]);
        }
    }

     return pivotIndex;
}

void quickSort(float arr[], int start, int end)
{

    
    if (start >= end)
        return;

    // cutting the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{

    std::cout << "Enter 15 float numbers. I trust you and don't check your input.\n";

    float arr[15];
    int n = 15;
    for (int i = 0; i <15; i++)
    {
    std::cin >> arr[i];

    }
    for (int i = 0; i < 15; i++)
    {
        std::cout << arr[i] << "\t ";
    }
    std::cout << "\n";

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t ";
    }

    return 0;
}