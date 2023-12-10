#include <stdio.h>

// for loop printing
void printLoop(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Logic
int partition(int *arr, int lower, int upper)
{
    int start = lower; // start pointer
    int end = upper;   // end pointer
    int pivot = arr[lower];
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            // swap start and end values
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    // out of while loop means start and end has crossed so swap end with a[lower]
    int temp = arr[lower];
    arr[lower] = arr[end];
    arr[end] = temp;
    return end; // pivot index is returned
}
void quickSort(int *arr, int lower, int upper)
{
    if (lower < upper) // atleast two elements are there
    {
        int pivot = partition(arr, lower, upper); // order of n
        quickSort(arr, lower, pivot-1); // order of logn
        quickSort(arr, pivot + 1, upper);
    }
}
// driver
int main()
{
    int arr[] = {0,-22,27,-35,55,-77};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    printLoop(arr, size);
    return 0;
}