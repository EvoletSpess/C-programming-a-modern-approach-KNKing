#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int counter = 0;
    printf("Enter a sentence: ");
    while (c != '\n') {
        c = toupper(c = getchar());
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') counter++;
    }
    printf("Your sentence contains %d vowels.\n", counter);
    return 0;
}