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
    for (int i = 0; i < size - 1; i++) // size - 1 passes
    {
        int min = i;
        for (int j = i + 1; j < size; j++) // start from i + 1 index
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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