// find sum of all number
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,sum;
     printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr= (int *)malloc(n * sizeof(int));//functoin
        printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }  
   sum+=arr[i];//sum of all number
    printf("sum of all value %d",sum);
   free(arr);
    return 0;
}
