#include <stdio.h>
int main() {
    unsigned long n, max, fact = 1, sum = 0;
    scanf("%lu,%lu", &n, &max);
    for (unsigned long i = 1; i <= n; i++) {
        if (i == 13) {
            printf("overflow at 13!");
            return 0;
        }
        fact *= i;
        sum += fact;
        if (sum > max) {
            printf("overflow at %lu!", i);
            return 0;
        }
    }
    printf("%lu", sum);
    return 0;
}