//print only prime numbers of array
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
    }  int flag;
		// num is prime
		 int num = arr[i];
		flag = 1;
		
		if(num<2){
			//num is not prime
			flag = 0;
		}
	
		for (int j=2; j<=num/2; j++)
	{
		if(num%j==0){
			flag=0;
			break;
		}
					
	}
	if(flag==1){
			printf("%d is prime \n",num);
		}
  free(arr);
   return 0;
	}
