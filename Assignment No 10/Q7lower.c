#include <stdio.h> 
#include<string.h>
char* my_strlwr(char* str);

int main() {
    char text[] = "FIRSTBITSOLUTIOON1!";
    printf("Original string: %s\n", text);

  
    my_strlwr(text);

    printf("Lowercase string: %s\n", text);

    return 0;
}
char* my_strlwr(char* str) {
    int i = 0;
    while (str[i] != '\0') { 
        if (str[i] >= 'A' && str[i] <= 'Z') {
           
            str[i] = str[i] + 32;
            
        }
        i++;
    }
    return str;
}