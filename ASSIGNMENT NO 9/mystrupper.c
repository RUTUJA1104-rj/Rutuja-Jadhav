#include <stdio.h> 
int mystrupr(char*str);
char* my_strupr(char *str);

int main() {
    char text[100];

    printf("Enter a string: ");
    
    fgets(text, sizeof(text), stdin); 
     for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
    }

    printf("Original string: %s\n", text);
     mystrupr(text);
    printf("Uppercase string: %s\n", text);
    return 0;
}
char* my_strupr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
        
            str[i] = str[i] - ('a' - 'A'); 
         
        }
        i++;
    }
    return str; 
	
}