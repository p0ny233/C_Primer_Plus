#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUM 10

void showArray(int * ar, int len);
void getRandomNumber(int * ar, int len, int n);

int main(void)
{
    int i;
    time_t t;

    int ar[NUM] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    srand(time(&t));
    for (i = 0; i < NUM; i++)
        *(ar + i) = random() % 100;
    
    showArray(ar, NUM);

    getRandomNumber(ar, NUM , 2);




    return 0;
}

void getRandomNumber(int * ar, int len, int n)
{
    int i;
    int m;
    int temp;
    int repeat;
    int * ptr;
    size_t t;

    ptr = malloc(n * sizeof(*ar));

    int j = 0;
    
    srand(time(&t));
    for (repeat = 0, i = 0; i < n;)
    {

        temp = random() % len;
        //printf("temp = %d\n", temp);

        for (m = 0; m < j; m++)
        {
            if (*(ptr + m) == *(ar + temp))
            {
                //printf("repeat :%d j = %d\n", *(ptr + m), j);
                repeat++;
                break; // same
            }
        }

        if (m == j)
        {
            *(ptr + j) = *(ar + temp);
            j++;
            i++;
            repeat = 0;
        }

        if (repeat > 2)
        {
            printf("more repeat, next time try again\n");
            exit(-1);
        }

    }

    showArray(ptr, j);
}

void showArray(int * ar, int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d\t", *(ar + i));
    putchar('\n');
}
