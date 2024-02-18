#include <stdio.h>

int main() {
    float knots;
    printf("Enter a wind speed in knots: ");
    scanf("%f", &knots);
    if (knots < 1.0) printf("Calm\n");
    else if (knots < 4.0) printf("Light air\n");
    else if (knots < 28.0) printf("Breeze\n");
    else if (knots < 48.0) printf("Gale\n");
    else if (knots <= 63.0) printf("Storm\n");
    else printf("Hurricane\n");
    return 0;
}