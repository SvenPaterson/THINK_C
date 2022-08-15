#include <stdio.h>
#include <stdlib.h>

/* generate print world statement */

int main(void)
{
    int hr, min, sec;
    float secs_remaining, secs_till;
    float percentage_day;
    char sep;

    hr = 9;
    min = 32;
    sec = 58;
    sep = ':';

    printf("Hello, the current time is ");
    printf("%i%c%i%c%i", hr, sep, min, sep, sec);
    secs_till = ((hr*3600)+(min*60)+sec);
    printf("\nIt has been %.0f secs since midnight", secs_till);
    secs_remaining = 24*3600 - ((hr*3600)+(min*60)+sec);
    printf("\nThere are %.0f secs until midnight", secs_remaining);
    percentage_day = 100*secs_till/(24*3600);
    printf("\n%.2f%% of the day has elapsed", percentage_day);
    return(EXIT_SUCCESS);
}