#include <string.h>
#include <stdio.h>
int mystrrev(char*str);
int main() {
	int str;
    char myString[] = "Hello World";
    printf("Original string: %s\n", myString);

    mystrrev(str); // Call the user-defined function
    printf("Reversed string: %s\n", myString);

   }
// Function to reverse a string
 mystrrev(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str; 
}

