#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2018;

    printf("Today is %i %i %i", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}
