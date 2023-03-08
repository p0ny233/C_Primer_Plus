#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUM 10

int comp(const void * ptr1, const void * ptr2);

int main(void)
{
    int i;
    time_t t;
    int arr[NUM];

    srand(time(&t));

    for (i = 0; i < NUM; i++)
        *(arr + i) = random() % 15;

    for (i = 0; i < NUM; i++)
        printf("arr[%d] = %d\n",i ,*(arr + i));


    printf("\nsort ...\n");

    qsort(arr, NUM, sizeof(*arr), comp);


    for (i = 0; i < NUM; i++)
        printf("arr[%d] = %d\n",i ,*(arr + i));

    return 0;
}

int comp(const void * ptr1, const void * ptr2)
{
    int * a = (int *)ptr1;
    int * b = (int *)ptr2;

    if (*a > *b)
        return -1; // no change
    else if (*a == *b)
        return -1; // no change
    else 
        return 1;
}
