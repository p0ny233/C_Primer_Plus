#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define NUM1 20
#define NUM2 30

int main(void)
{
    int i;
    double data1[NUM1];
    double data2[NUM2];
    time_t t;


    srand((unsigned)time(&t));

    for (i = 0; i < NUM1; i++)
        *(data1 + i) = (random() % 100 + 13) / 13;

    for (i = 0; i < NUM2; i++)
        *(data2 + i) = (random() % 100 + 13) / 13;

    
    for (i = 0; i < NUM1; i++)
        printf("data1[%d] = %f\n", i, *(data1 + i));

    putchar('\n');

    for (i = 0; i < NUM2; i++)
        printf("data2[%d] = %f\n", i, *(data2 + i));


    putchar('\n');
    printf("copy data2 to data1\n");
    memcpy(data1, data2, sizeof(*data2) * (NUM1 - 10));
    for (i = 0; i < NUM1; i++)
        printf("data1[%d] = %f\n", i, *(data1 + i));
        


    return 0;
}
