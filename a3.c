#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char pattern[n][2 * n - 1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            pattern[i][j]=' ';
        }
    }
    for(int row = 0; row < n; row++) {
        for (int col = n - 1 - row; col <= n - 1 + row; col = col + 2) {
            pattern[row][col] = row + '1';
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            putchar(pattern[i][j]);
        }
        putchar('\n');
    }
    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j < 2 * n - 1; j++) {
            putchar(pattern[i][j]);
        }
        putchar('\n');
    }
}