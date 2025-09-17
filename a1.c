#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a){
        printf("Triangle sides.\n");
        if (a == b && b == c) {
            printf("Equilateral triangle.\n");
        }
        else {
            if (a == b || b == c || c == a) {
                printf("Isosceles triangle.\n");
            }
            if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) {
                printf("Right triangle.\n");
            }
        }
    }
    else {
        printf("Not triangle sides.");
    }
    return 0;
}