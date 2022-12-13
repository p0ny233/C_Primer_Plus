#include <stdio.h>

#define SIZE 4

int main(void)
{
    int arr[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("%2d%14d\n", i, arr[i]);

    }
    
    return 0;

}
