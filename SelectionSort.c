#include <stdio.h>
void printLoop(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
int main()
{
    int arr[] = {5, 6, 1, 1, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printLoop(arr, size);
    return 0;
}