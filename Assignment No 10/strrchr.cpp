#include <stdio.h>
#include <string.h>

int main() {
    const char *text = "RutujaMarutiJadhav";
    char ch = 'J';

    char *last = strrchr(text, ch);

    if (last) {
        printf("Last occurrence of '%c' is at index %ld\n", ch, last - text);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
