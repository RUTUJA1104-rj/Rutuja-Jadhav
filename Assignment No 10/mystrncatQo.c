#include <stdio.h>
#include <string.h>
char* mystrncat(char *dest, char *src, size_t n) ;

void main() 
{
    char str1[20] = "Hello, ";
    char *str2 = "World!";

    mystrncat(str1, str2, 3);  

    printf("Result: %s\n", str1);  
    
}

 char* mystrncat(char *dest, char *src, size_t n) 
{
    char *ptr = dest + strlen(dest);  
    while (n-- && *src) 
	{
        *ptr++ = *src++;
    }
    *ptr = '\0';  
    return dest;
}

