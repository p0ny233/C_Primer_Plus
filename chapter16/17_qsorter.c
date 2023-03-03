#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 40
void fillarray(double ar[], int);
void showarray(double ar[], int);
int mycmp(const void * p1, const void * p2);

int main(void)
{
    double vals[NUM];
    fillarray(vals, NUM); // init array
    puts("Random list:");
    showarray(vals, NUM);
    
    qsort(vals, NUM, sizeof(*vals), mycmp);
    puts("\nSorted list:");
    showarray(vals, NUM);

    return 0;
}

void fillarray(double ar[], int n)
{
    time_t t;
    int i;

    srand((unsigned)time(&t));


    for (i = 0; i < NUM; i++)
    {
        ar[i] = (double)rand() / (double)rand() + 0.1;
    }
}

void showarray(double ar[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%9.4f ", *(ar + i - 1));
        if (i % 6 == 0)
            putchar('\n');
    }

    /* 
    for (i = 0; i < n; i++)  // tips
    {
        printf("%9.4f ", *(ar + i));
        if (i % 6 == 5)   // tips
            putchar('\n');
    }
     */

    if (i % 6 != 0)
        putchar('\n');
}

int mycmp(const void * p1, const void * p2)
{
    const double * a1 = (const double *)p1;
    const double * a2 = (const double *)p2;

    if (*a1 < *a2)
        return 1;
    else if (*a1 == *a2)
        return 0;
    return -11;
}
