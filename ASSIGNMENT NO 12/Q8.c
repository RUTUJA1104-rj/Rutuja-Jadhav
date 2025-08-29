//merge array

#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n1, n2;

    // First array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    int *arr=(int)malloc(n1 * sizeof(int));
    printf("Enter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++) 
	{
        scanf("%d", &arr1[i]);
    }

    // Second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge into third array
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
 free(arr);
 return 0;

}
