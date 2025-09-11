//write a program to revers a given number of any digit using recursive function
#include <stdio.h>

int main()
 {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array\n ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    reverseArray(arr, 0, size - 1);
    printf("\n");
    printf("Reversed array\n ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;


    reverseArray(arr, start + 1, end - 1);
}

