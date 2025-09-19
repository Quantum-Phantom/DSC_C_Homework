#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c) {
            printf("equilateral triangle\n");
            return 0;
        }
        else {
            if (a == b || b == c || c == a) {
                printf("isosceles triangle\n");
                return 0;
            }
            if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) {
                printf("right triangle\n");
                return 0;
            }
        }
        printf("normal triangle\n");
    }
    else {
        printf("NOT triangle\n");
    }
    return 0;
}