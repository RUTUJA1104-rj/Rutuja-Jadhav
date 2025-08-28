// string function..... strcpy
#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[20] = "Hello";
    char str2[20]="firstbit ";
    strcpy(str1, str2);
    printf("Copied string: %s\n", str1);
    
}