#include <stdio.h>
int leapQ (int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dateQ (int year, int month, int day) {
    if (month < 1 || month > 12) {
        return 0;
    }
    int feb = (month == 2 && leapQ(year)) ? 29 : months[month - 1];
    if (day < 1 || day > feb) {
        return 0;
    }
    return 1;
}