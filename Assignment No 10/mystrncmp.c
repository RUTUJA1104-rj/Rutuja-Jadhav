#include<stdio.h>
int mystrncmp( char *s1, char *s2, size_t n);
void main() 
{
    char *str1 = "FirstBit";
   char *str2 = "FirstAid";

    int result = mystrncmp(str1, str2, 5);

    if (result == 0) 
	{
        printf("The first 5 characters are equal.\n");
    } 
	else if (result < 0) 
	{
        printf("str1 is less than str2 in the first 5 characters.\n");
    } 
	else 
	{
        printf("str1 is greater than str2 in the first 5 characters.\n");
    }
}
int mystrncmp( char *s1, char *s2, size_t n) {
    while (n-- > 0) {
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }
        if (*s1 == '\0') {
            break;
        }
        s1++;
        s2++;
    }
    return 0;
}
