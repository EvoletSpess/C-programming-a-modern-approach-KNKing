#include <stdio.h>

int main() {
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    printf("Equivalent 12-hour time: ");
    if (hour == 0) {
        printf("12:%.2d AM\n", minute);
    } else if (hour > 12) {
        hour -= 12;
        printf("%.2d:%.2d PM\n", hour, minute);
    } else if (hour == 12) {
        printf("%.2d:%.2d PM\n", hour, minute);
    } else {
        printf("%.2d:%.2d AM\n", hour, minute);
    }
    return 0;
}