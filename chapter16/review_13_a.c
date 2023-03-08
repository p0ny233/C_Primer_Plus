#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM 20

int sort(const void * ptr1, const void * ptr2);

int main(void)
{

    int i;
    int scores[NUM];
    time_t t;
    srand(time(&t));

    for (i = 0; i < NUM; i++ )
    {
        *(scores + i) = random() % 15 + 1;
    }

    for (i = 0; i < NUM; i++)
        printf("scores[%d] = %d\n", i, *(scores + i));


    qsort(scores, NUM, sizeof(*scores), sort);
    
    for (i = 0; i < NUM; i++)
        printf("scores[%d] = %d\n", i, *(scores + i));

    return 0;
}

int sort(const void * ptr1, const void * ptr2)
{
    const int * a = (const int *)ptr1;
    const int * b = (const int *)ptr2;

    if (*a > *b)
        return -1;
    else 
        return 1;

}
