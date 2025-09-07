#include <stdio.h>
#include <string.h>
char *mystrnstr(const char *haystack, const char *needle, size_t len);
void main() 
{
    const char *text = "FirstBitSolution";
    const char *search = "Bit";

    char *result = mystrnstr(text, search, 10);

    if (result) 
	{
        printf("Substring found at position: %ld\n", result - text);
    } 
	else 
	{
        printf("Substring not found within the first 10 characters.\n");
    }
}
char *mystrnstr(const char *haystack, const char *needle, size_t len)
 {
    size_t needle_len = strlen(needle);

    if (needle_len == 0)
        return (char *)haystack;

    for (size_t i = 0; i + needle_len <= len && haystack[i] != '\0'; i++) 
	{
        if (strncmp(&haystack[i], needle, needle_len) == 0) 
		{
            return (char *)&haystack[i];
        }
    }
    return NULL;
}
