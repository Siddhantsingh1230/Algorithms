// Recursive Approach

#include <stdio.h>
int binarySearch(int *arr, int low, int high, int key)
{
    if (low <= high)
    {
    int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            return binarySearch(arr, mid + 1, high, key);
        }
        else
        {
            return binarySearch(arr, low, mid - 1, key);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    printf("index at %d", binarySearch(arr, 0, size - 1, key));
    return 0;
}