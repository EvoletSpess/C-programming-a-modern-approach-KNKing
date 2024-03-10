#include <stdio.h>

int main(void) {
    int n, reversedNum = 0, remainder;
    scanf("%d", &n);
    do {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;       
    } while (n != 0);
    printf("%d", reversedNum);
    return 0;
}