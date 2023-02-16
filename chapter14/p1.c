#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define LEN 4
#define MONTHSNUM 12

const char * MONTH[] =  {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

struct months {
    char month[LEN];
    int days;
    int belong;
};

int main(void)
{
    int count;
    char input[LEN];
    int days;
    struct months months[MONTHSNUM];
    struct months * pmonth;

    // init
    for (count = 0; count < MONTHSNUM; count++)
    {
        pmonth = months + count;
        strncpy(pmonth->month, *(MONTH + count), strlen(*(MONTH + count)) + 1);
        pmonth->days = 30;
        pmonth->belong = count + 1;
    }

    while (printf("enter month:") && scanf("%s", &input))
    {
        for (count = 0, days = 0; true; count++)
        {
            pmonth = months + count;
            printf("%d(%s) month have %d day\n", pmonth->belong, pmonth->month, pmonth->days);
            days += pmonth->days;

            if (strcmp(*(MONTH + count), input) == 0)
                break;
        }
        printf("1(Jan) ~ %d(%s) have %d days\n", count + 1, pmonth->month, days);
    }
    return 0;
}
