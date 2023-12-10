#include <stdio.h>
void printLoop(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
// Logic
void heapify(int *arr, int size, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < size && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        // swap
        int temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        heapify(arr, size, largest);
    }
}

void heapSort(int *arr, int size)
{
    // to do a heap sort there two steps involved
    // 1st step to create a heap using heapify {O(n)}
    // 2nd step is to delete the root node n times {o(nlog(n))}

    // creating a max heap
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
    // deleting a max heap and storing the result in the same array
    for (int i = size - 1; i >= 0; i--)
    {
        // swaping first (root) node with last node in heap
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        // again creating a max heap
        heapify(arr, i, 0);
    }
}
int main()
{
    int arr[] = {5, 6, 3, 9, 4, 1, 1, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, size);
    printLoop(arr, size);
    return 0;
}