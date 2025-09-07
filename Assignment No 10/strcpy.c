#include <stdio.h>
char *mystrcpy(char *dest, const char *src);
int main()
 {
    char source[] = "FirstBitSolution";
    char destination[50]; 
    mystrcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}

char *mystrcpy(char *dest, const char *src) {
    char *ptr = dest;
    while (*src) {
        *ptr++ = *src++;
    }
    *ptr = '\0'; 
    return dest;
}
