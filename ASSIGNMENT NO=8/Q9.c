//Revers the given array
#include <stdio.h>

int main()
 {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Reverse logic
    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }

    
}