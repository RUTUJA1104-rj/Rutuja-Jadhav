//write a program to check whether a number is even or odd
#include<stdio.h>
void evenodd(int*);
void main()
{
    int no=8;
    evenodd(&no);
}
void evenodd(int*no)
{
	if(*no% 2==0)
	
	printf("even");
 else
 printf("odd");
}