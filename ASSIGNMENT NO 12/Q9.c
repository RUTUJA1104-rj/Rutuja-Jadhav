//Revers the given array
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,sum; 
    printf("Enter number of elements: ");
    scanf("%d", &n);
     int *arr = (int *)malloc(n * sizeof(int));//functoin
        printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }  
    // Reverse logic
    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}