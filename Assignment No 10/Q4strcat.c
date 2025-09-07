#include<stdio.h>
#include<string.h>
int mystrcat(char*,char*);
void main()
{
	int main()
 {
    char str1[] = "firstbitsolution";
    char str2[] = "fistbit";

    printf("Before concatenation: %s\n", str1);

    mystrcat(str1, str2);

    printf("After concatenation: %s\n", str1);

    char* mystrcat(char* destination, const char* source) 
	{
    int dest_len = 0;
    while (destination[dest_len] != '\0') 
	{
        dest_len++;
    }

    
    int i = 0;
    while (source[i] != '\0') 
	{
        destination[dest_len + i] = source[i];
        i++;
    }
    destination[dest_len + i] = '\0';

    return destination; 

}
}


}

