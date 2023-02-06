#include <stdio.h>
#include <stdlib.h>

int * make_array(int n, int val);
void show_array(const int arr[], int n);


int main(void)
{

    int * pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);

        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }

        printf("Enter the number of elements (<1 to quit): ");

    }

    printf("Done.\n");

    return 0;

}



int * make_array(int n, int val)
{   
    int i;
    int * ptr = (int *)malloc(n * sizeof(int));
    if (!ptr)
        exit(EXIT_FAILURE);

    for (i = 0; i < n; i++)
        *(ptr + i) = val;

    return ptr;
}


void show_array(const int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ( i % 8 == 0)
            putchar('\n');

        printf("%7d", *(arr + i));

    }

    putchar('\n');

}
