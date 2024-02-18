#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int d1, d2, d3, d4, d5;

    d5 = n % 8;
    n /= 8;
    d4 = n % 8;
    n /= 8;
    d3 = n % 8;
    n /= 8;
    d2 = n % 8;
    n /= 8;
    d1 = n % 8;
    n /= 8;        

    printf("%d%d%d%d%d", d1, d2, d3, d4, d5);
    return 0;
}