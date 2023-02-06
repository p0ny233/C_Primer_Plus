#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void sort(int * arr, int n);

int main(void)
{
    int i;
    time_t t;
    int arr[SIZE];

    srand((unsigned int) time(&t));

    for (i = 0; i < SIZE; i++)
    {

        *(arr + i) = (rand() % 10) + 1;
    }

    for (i = 1; i <= SIZE; i++)
    {
        printf("%7d", *(arr + i - 1));

        if (i % 10 == 0)
            putchar('\n');
    }

    printf("sort start\n");
    
    sort(arr, SIZE);

    printf("sort end\n");
    for (i = 1; i <= SIZE; i++)
    {
        printf("%7d", *(arr + i - 1));

        if (i % 10 == 0)
            putchar('\n');
    }


    return 0;
}


void sort(int * arr, int n)
{

    int i, j;
    int tmp;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;

            }
        }

}
