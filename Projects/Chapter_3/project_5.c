#include <stdio.h>

int main() {
    int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);

    printf("%2d %2d %2d %2d\n", a1, a2, a3, a4);
    printf("%2d %2d %2d %2d\n", b1, b2, b3, b4);
    printf("%2d %2d %2d %2d\n", c1, c2, c3, c4);
    printf("%2d %2d %2d %2d\n\n", d1, d2, d3, d4);

    int rsum1, rsum2, rsum3, rsum4;
    rsum1 = a1 + a2 + a3 + a4;
    rsum2 = b1 + b2 + b3 + b4;
    rsum3 = c1 + c2 + c3 + c4;
    rsum4 = d1 + d2 + d3 + d4;

    int csum1, csum2, csum3, csum4;
    csum1 = a1 + b1 + c1 + d1;
    csum2 = a2 + b2 + c2 + d2;
    csum3 = a3 + b3 + c3 + d3;
    csum4 = a4 + b4 + c4 + d4;

    int dsum1, dsum2;
    dsum1 = a1 + b2 + c3 + d4;
    dsum2 = d1 + c2 + b3 + a4;

    printf("Row sums: %d %d %d %d\n", rsum1, rsum2, rsum3, rsum4);
    printf("Column sums: %d %d %d %d\n", csum1, csum2, csum3, csum4);
    printf("Diagonal sums: %d %d\n", dsum1, dsum2);
}