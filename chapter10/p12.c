#include <stdio.h>

#define MONTHS 12
#define YEARS  5

void average(const float (*rain)[MONTHS], int years);
void sum2d(const float rain[][MONTHS], int years, float * ptotal);


int main(void)
{

    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    float subtot, total;
    
    printf(" YEAR    RAINFALL (inches)\n");

    sum2d(rain, YEARS, &total);
    printf("\nThe yearly avderage is %.1f inches.\n\n", total / YEARS);
    printf("MONTHS AVERAES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    average(rain, YEARS);


}

void sum2d(const float rain[][MONTHS], int years, float * ptotal)
{
    int year, month;
    float total;

    for (year = 0; total = 0, year < years; year++)
    {
        for (month = 0; month < MONTHS; month++)
            total += rain[year][month];

        printf("%5d %15.1f\n", 2010 + year, total);
    }

    *ptotal = total;
}

void average(const float (*rain)[MONTHS], int years)
{
    float subtot;
    int month, year;

    for (month = 0; month < MONTHS; month++)
    {
        for (subtot = 0, year = 0; year < years; year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot / years);
    }
    printf("\n");
}
