//1. Write a program in C for, to find common elements in two arrays.
//eg. arr = 1 2 3 4 5
//brr = 1 6 7 3 2
//o/p : 1 2 3
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {1, 6, 7, 3, 2};
    int size1 = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(brr) / sizeof(brr[0]);

    printf("Common elements: ");

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr[i] == brr[j]) {
                // Check if already printed
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    printf("%d ", arr[i]);
                }
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
