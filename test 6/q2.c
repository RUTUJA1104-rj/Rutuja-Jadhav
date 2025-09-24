//2. Write a program in C to find two maximum number in array?
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 23, 89, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max1, max2;

    if (size < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    // Initialize max1 and max2
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Traverse the rest of the array
    for (int i = 2; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The two largest numbers are: %d and %d\n", max1, max2);
    return 0;
}
