#include<stdio.h>
#include<string.h>
#include <ctype.h>

int mystrncasecmp(const char *s1, const char *s2, size_t n) ;
void main() 
{
    const char *str1 = "Firstbitsolution";
    const char *str2 = "rutuja";

    int result = mystrncasecmp(str1, str2, 5);

    if (result == 0) 
	{
        printf("The first 5 characters are equal .\n");
    }
	 else
	{
        printf("The first 5 characters are different.\n");
    }

    
}
int mystrncasecmp(const char *s1, const char *s2, size_t n) 
{
    while (n-- > 0) 
	{
        char c1 = tolower((unsigned char)*s1++);
        char c2 = tolower((unsigned char)*s2++);
        if (c1 != c2)
		 {
            return (int)(c1 - c2);
         }
        if (c1 == '\0')
		 {
            break;
        }
    }
    return 0;
}
