//print alternate element in array
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i;
        
    printf("Enter number of elements: ");
    scanf("%d", &n);
     int *arr = (int *)malloc(n * sizeof(int));//functoin
    if (arr == NULL) 
	{
        printf("Memory not allocated!\n");
        return 0;
    }    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }  
    printf("altrnate element\n");
    for(int i=0;i<arr[i];i+=2)//alternate number
    {
    	printf("%d\n",arr[i]);
    }
    free(arr);
    return 1;
}