#include <stdio.h>

int main() {
    int n;
    unsigned long k;
    scanf("%d,%lu", &n, &k);
    --k;
    unsigned long fact[13] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};
    if (n <= 12 && k >= fact[n]) {
        for (int i = n; i > 0; i--){
            printf("%c%c", '`' + i, i == 1 ? '\n' : ' ');
        }
        return 0;
    }
    char used[26] = {0};
    for (int i = 0; i < n; i++) {
        unsigned long b = fact[n - 1 - i];
        int ith = k / b;
        k %= b;
        int cnt = 0, ith_unused;
        for (ith_unused = 1; ith_unused <= n; ith_unused++) {
            if (!used[ith_unused]) {
                if (cnt == ith) {
                    break;
                }
                ++cnt;
            }
        }
        used[ith_unused] = 1;
        printf("%c%c", ith_unused + '`', i == n - 1 ? '\n' : ' ');
    }
    return 0;
}