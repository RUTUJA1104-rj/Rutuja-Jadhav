//Q1 write a program to calculate number of vowel , consonants , space and digits from a given string.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int vowels = 0, consonants = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   

    for (int i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];

        if (isalpha(ch)) 
		{
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
		 else if (isspace(ch)) 
		{
            spaces++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);
    return 0;
}
