// itterative approach
#include <stdio.h>

int binarySearch(int *arr, int size, int key)
{
    int low = 0;         // first element pointer
    int high = size - 1; // last element pointer
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
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
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    printf("index at %d", binarySearch(arr, size, key));
    return 0;
}