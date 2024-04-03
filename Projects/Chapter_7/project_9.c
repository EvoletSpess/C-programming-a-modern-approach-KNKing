#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int h, m, time;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h, &m, &c);
    if (toupper(c) == 'P') time += 720; 
    time += h * 60 + m;
    h = time / 60;
    m = time % 60;
    printf("%d:%d\n", h, m);
    return 0;
}