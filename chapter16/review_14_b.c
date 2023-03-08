#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define NUM1 20
#define NUM2 30


int main(void)
{
    int i;
    time_t t;
    double data1[NUM1];
    double data2[NUM2];
    double * src;

    srand(time(&t));

    for (i = 0; i < NUM1; i++)
        *(data1 + i) = (random() % 100 + 13) / 13;

    for (i = 0; i < NUM1; i++)
        printf("data1[%d] = %f\n",i ,*(data1 + i));

    putchar('\n');
    srand(time(&t));

    for (i = 0; i < NUM2; i++)
        *(data2 + i) = (random() % 100 + 13) / 13;

    for (i = 0; i < NUM2; i++)
        printf("data2[%d] = %f\n", i, *(data2 + i));


    putchar('\n');

    src = data2 + NUM2 - 10;

    memcpy(data1, src, sizeof(*(src)) * 10);

    for (i = 0; i < NUM1; i++)
        printf("data1[%d] = %f\n", i, *(data1 + i));


    


    return 0;
}
