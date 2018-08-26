#include <stdio.h>

int main (void)
{
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today = {1,2,3}; // declaration

    // today.month = 9;
    // today.day = 25;
    // today.year = 2015;

    printf("%i %i %i\n", today.month , today.day , today.year );

    struct date SomeDates[10];

    // struc pointer
    struct date *datePtr = &today;

}