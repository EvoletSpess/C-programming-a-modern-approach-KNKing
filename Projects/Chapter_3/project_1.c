#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n1, n2;
    n1 = n % 10;
    n2 = n / 10;
    printf("%d%d", n1, n2);
    return 0;
}