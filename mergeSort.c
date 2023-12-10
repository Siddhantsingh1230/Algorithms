#include <stdio.h>
void printLoop(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void merge(int *arr, int lower, int mid, int upper)
{
    // temp array creation to store sorted results
    int TempLength = upper - lower + 1;
    int temp[TempLength];
    int i = lower;   // pointer for left sublist
    int j = mid + 1; // pointer for right sublist
    int k = 0;       // pointer for temp array
    while (i <= mid && j <= upper)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
            
    }
    if(i>mid){
        while(j<=upper){
            temp[k] = arr[j];
            k++;
            j++;
        }
    }else{
         while(i<=mid){
            temp[k] = arr[i];
            k++;
            i++;
        }
    }
    k = 0; // making k index to be zero again for traversing it from the first element
    for (int s = lower; s <= upper; s++)
    {
        arr[s] = temp[k];
        k++;
    }
    
}
void mergeSort(int *arr, int lower, int upper)
{
    if (lower < upper) // means atleast two elements are there
    {
        int mid = (lower + upper) / 2;
        mergeSort(arr, lower, mid);     // left division
        mergeSort(arr, mid + 1, upper); // right division
        merge(arr, lower, mid, upper);  // merging left and right sublists
    }
}
int main()
{
    int arr[] = {5, 6,3,9,4, 1, 1, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    printLoop(arr, size);
    return 0;
}