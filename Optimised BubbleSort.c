#include <stdio.h>

void printLoop(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int *arr, int size)
{
    int flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {5, 6,1, 1, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printLoop(arr, size);
    return 0;
}