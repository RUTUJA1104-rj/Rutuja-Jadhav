//find odd and even among the number
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,sum;  
    printf("Enter number of elements: ");
    scanf("%d", &n);
     int*arr = (int *)malloc(n * sizeof(int));//functoin
   
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }  
    printf("even number in array\n");
    for(i=0;i<5;i++)
    {
    if(arr[i]%2==0)//even number
    {
    	printf("%d",arr[i]);
	}
     printf("\n");
 }
    printf("odd number in array\n");
       for(i=0;i<5;i++)
      {    
	    if(arr[i]%2!=0)//odd number
	     {
		   printf("%d",arr[i]);
	      }
	  printf("\n");
	  }
	  free(arr);
	  return 0;
	  
}
