#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n1, n2, n3;
    n1 = n % 10;
    n2 = (n / 10) % 10;
    n3 = n / 100;
    printf("%d%d%d", n1, n2, n3);
    return 0;
}