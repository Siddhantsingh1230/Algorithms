#include <stdio.h>
int linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 1, 5, 0, 6, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 21;
    printf("key at %d", linearSearch(arr, size, key));
    return 0;
}

// to run and compile the c code use following command
// gcc file.c -> compiles the c code
// a.out -> runs the compile the code