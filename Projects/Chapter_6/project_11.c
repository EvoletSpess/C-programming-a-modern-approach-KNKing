#include <stdio.h>

int main (void) {
    int n = 0;
    double answer = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        answer += 1.0/(double)i;
    }
    printf("%lf", answer);
    return 0;
}