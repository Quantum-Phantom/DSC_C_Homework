#include <stdio.h>
int leapQ (int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dateQ (int year, int month, int day) {
    if (year < 1600 || year > 2100 || month < 1 || month > 12) {
        return 0;
    }
    int max_day = (month == 2 && leapQ(year)) ? 29 : months[month - 1];
    if (day < 1 || day > max_day) {
        return 0;
    }
    return 1;
}
int main() {
    int year, month, day;
    scanf("%d,%d,%d", &year, &month, &day);
    if (!dateQ(year, month, day)) {
        printf("Invalid\n");
        return 0;
    }
    long ans = 0;
    for (int YEAR = 1600; YEAR < year; YEAR++) {
        ans += leapQ(YEAR) ? 366 :365;
    }
    for (int MONTH = 1; MONTH < month; ++MONTH) {
        ans += (MONTH == 2 && leapQ(year)) ? 29 : months[MONTH - 1];
    }
    ans += day - 1;
    int res = (6 + ans) % 7;
    printf("%d", res ? res : 7);
}