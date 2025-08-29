#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,sum;
    int *arr;    
    printf("Enter number of elements: ");
    scanf("%d", &n);
     arr = (int *)malloc(n * sizeof(int));//functoin
        printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }  
    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
	 {
        for (int j = 0; j < n - i - 1; j++)
		 {
            if (arr[j] > arr[j + 1]) 
			{
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;

}