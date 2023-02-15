#include <stdio.h>
#include <string.h>

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
    struct months months[MONTHSNUM];
    struct months * pmonth;

    for (count = 0; count < MONTHSNUM; count++)
    {
        pmonth = months + count;
        strncpy(pmonth->month, *(MONTH + count), strlen(*(MONTH + count)) + 1);
        pmonth->days = 30;
        pmonth->belong = count + 1;
    }

    for (count = 0; count < MONTHSNUM; count++)
    {
        pmonth = months + count;
        printf("%d(%s) month have %d day\n", pmonth->belong, pmonth->month, pmonth->days);
    }
    return 0;
}
