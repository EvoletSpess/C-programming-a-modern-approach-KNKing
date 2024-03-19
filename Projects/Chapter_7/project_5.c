#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int value = 0;
    printf("Enter a word: ");
    while (ch != '\n') {
        ch = getchar();
        ch = toupper(ch);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U') value += 1;
        else if (ch == 'D' || ch == 'G') value += 2;
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') value += 3;
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y') value += 4;
        else if (ch == 'K') value += 5;
        else if (ch == 'J' || ch == 'X') value += 8;
        else if (ch == 'Q' || ch == 'Z') value += 10;
        else value += 0;
    }
    printf("Scrabble value: %d", value);
    return 0;
}