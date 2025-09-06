//write a user define function to revers stirng
#include <stdio.h>
#include <string.h>
void reverseString(char*) ;
void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    
}
// Function to reverse a string
void reverseString(char * str) 
{
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

