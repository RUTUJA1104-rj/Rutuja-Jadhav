//#include <stdio.h> 
int mystrcpy(char*,const char*);
int main() {
    char source_string[] = "first bit solution";
    char destination_buffer[50]; 
    mystrcpy(destination_buffer, source_string);

    printf("Copied string: %s\n", destination_buffer);

    return 0;
}

mystrcpy(char* destination, const char* source)
 {
    char* original_destination = destination; 
    while (*source != '\0') 
	{
        *destination = *source; 
        destination++;         
        source++;              
    }

    *destination = '\0';

    return original_destination;
}

