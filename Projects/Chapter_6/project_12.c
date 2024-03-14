#include <stdio.h>

int main (void) {
    int n = 0;
    double answer = 1.0;
    scanf("%d", &n);
    double epsilon = 0.0;
    scanf("%lf", &epsilon);
    for (int i = 1; answer < epsilon; i++) {
        answer += 1.0/(double)i;
    }
    printf("%lf", answer);
    return 0;
}