#include <stdio.h>
void printLoop(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insertionSort(int *arr,int size){
     for (int i = 1; i < size; i++)
     {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
     }
     
}
int main()
{
    int arr[] = {5, 6, 1, 1, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printLoop(arr, size);
    return 0;
}