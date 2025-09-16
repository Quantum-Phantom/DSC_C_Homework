#include <stdio.h>
int main() {
    unsigned long n, max;
    scanf("%lu,%lu", &n, &max);
    if (n >= 13) {
        printf("overflow\n");
    }
    else {
        unsigned long sums[12] = {1, 3, 9, 33, 153, 873, 5913, 46233, 409113, 4037913, 43954713, 522956313};
        if (sums[n-1] > max) {
            printf("overflow\n");
            return 0;
        }
        printf("%lu\n", sums[n-1]);
    }
    return 0;
}
