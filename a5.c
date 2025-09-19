#include <stdio.h>

int main() {
    int n;
    unsigned long k;
    scanf("%d,%lu", &n, &k);
    --k;
    unsigned long long fact[21] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
    if (n <= 12 && k >= fact[n]) {
        for (int i = n; i > 0; i--){
            printf("%c", '`' + i);
        }
        return 0;
    }
    char used[27] = {0};
    for (int i = 0; i < n; i++) {
        unsigned long ith = 0;
        unsigned long long b;
        if (n - 1 - i >= 21) {
            ith = 0;
        }
        else {
            b = fact[n - 1 - i];
            ith = k / b;
            k %= b;
        }
        unsigned long cnt = 0;
        int ith_unused;
        for (ith_unused = 1; ith_unused <= n; ith_unused++) {
            if (!used[ith_unused]) {
                if (cnt == ith) {
                    break;
                }
                ++cnt;
            }
        }
        used[ith_unused] = 1;
        printf("%c", ith_unused + '`');
    }
    return 0;
}