#include <stdio.h>

int main(void) {
    char ch, ch2;
    printf("Enter a first and last name: ");
    do ch = getchar(); while (ch == ' ');

    do ch2 = getchar(); while (ch2 != ' ');

    while (ch2 != '\n') {
        ch2 = getchar();
        if (ch2 != ' ' && ch2 != '\n') putchar(ch2);
    } 
    printf(", %c.\n", ch);
    return 0;
}