#include <stdio.h>

void sum2d(int * ptr1, int * ptr2, int * ptr3, int rows);
void show(int * ptr, int rows);

int main(void)
{

    int a[4] = {2, 4, 5, 8};
    int b[4] = {1, 0, 4, 6};
    int c[4];

    sum2d(a, b, c, 4);
    show(c, 4);

    return 0;
}

void sum2d(int * ptr1, int * ptr2, int * ptr3, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
        *(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
}

void show(int * ptr, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
        printf("%d\t", *(ptr + i));
}
