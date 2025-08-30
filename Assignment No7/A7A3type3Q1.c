//A3Q1 print number from 1 to 10
//output: 1 2 3 4 5 6 7 8 9 10
#include <stdio.h>
void printnum(int*);
void main()
{
    int n=1;  
    printnum(&n);
}
void printnum(int*n)
{
    while(*n<=10)
    {
        printf("%d ",*n); 
        (*n)++;            
    }
}