#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 10) {
        printf("The number %d has 1 digit.", n);
    } else if (n < 100) {
        printf("The number %d has 2 digits.", n);
    } else {
        printf("The number %d has 3 digits.", n);
    }
    return 0;
}