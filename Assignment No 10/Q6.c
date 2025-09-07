#include <stdio.h>
#include <ctype.h>
char *mystrupper(char *str) ;
int main()
 {
    char text[] = "FirstBitSolution";

    printf("Original: %s\n", text);
    mystrupper(text);
    printf("Uppercase: %s\n", text);

    return 0;
}

char *mystrupper(char *str) 
{
    char *ptr = str;
    while (*ptr) 
	{
        if (islower((unsigned char)*ptr)) 
		{
            *ptr = toupper((unsigned char)*ptr);
        }
        ptr++;
    }
    return str;
}
