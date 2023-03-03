#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

_Static_assert(sizeof(double) == 2 * sizeof(int), "double not twice int size");

void show_array(const int values[], int n);

int main(void)
{

    int values[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int target[SIZE];

    double curious[SIZE / 2] = { 2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30 };

    puts("memcpy() used");
    puts("values (original data): ");
    show_array(values, SIZE);

    memcpy(target, values, SIZE * sizeof(*values));
    puts("target (copy of values): ");
    show_array(target, SIZE);

    puts("\nUsing memmove() with overlapping ranges:");
    memmove(values + 2, values, 5 * sizeof(*values));
    puts("values -- elements 0-4 copied to 2-6:");
    show_array(values, SIZE);
    
    puts("Using memcpy() to copy double to int:");
    memcpy(target, curious, SIZE * sizeof(*curious) / 2);
    puts("target -- 5 doubles into 10 int positions:");
    show_array(target, SIZE / 2);
    show_array(target + 5, SIZE / 2);


    return 0;
}


void show_array(const int values[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d  ", *(values + i));

    putchar('\n');
}
