//1. WAP Print even and odd numbers in a given range.
//eg. i/p: start= 10, end= 25
//o/p: odd: 11 13 15 17 19 21 23 25
//eg. i/p: start= 1, end= 15
//o/p: even: 2 4 6 8 10 12 14
#include <stdio.h>
int main() 
{
    int start, end;    
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Odd numbers:\n ");
    for (int i = start; i <= end; i++)
	 {
        if (i % 2 != 0) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Even numbers:\n ");
    for (int i = start; i <= end; i++)
	 {
        if (i % 2 == 0) 
		{
            printf("%d ", i);
        }
    }
}
