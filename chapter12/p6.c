#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

static int number_count_arry[10] = {0};

int main(void)
{

    time_t t;
    int i, j;
    int number;
    
    //char * ptr = (char *)malloc(SIZE * sizeof(int));
    //if (!ptr)
    //    exit(EXIT_FAILURE);

    srand((unsigned int) time(&t));

    for (i = 0; i < SIZE; i++)
    {
        number = rand() % 10 + 1;
        ++*(number_count_arry + number - 1);
    }

    
    for (i = 0; i < 10; i++)
        printf("%d show %d\n", i + 1, *(number_count_arry + i));




    return 0;

}
