//Que 1: Write a program to print factors of number in given range.
//Eg. Range 10 to 15
//10 = 1 , 2 , 5 , 10
//11 = 1 , 11
//12 = 1, 2, 3, 4, 6, 12
//13 = 1, 13
//14 = 1, 2, 7, 14
//15 = 1, 3, 5, 15

#include <stdio.h>
int main()
 {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    for (int num = start; num <= end; num++) 
	{
        printf("%d = ", num);       
        for (int i = 1; i <= num; i++) 
		{
            if (num % i == 0)
			 {
                printf("%d", i);

                
                if (i != num) 
				{
                    printf(", ");
                }
            }
        }
        printf("\n"); 
    }

}
