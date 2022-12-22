#include <stdio.h>

int main(void)
{
    double d1[] = {1.2, 4.3, 5.6, 8.4, 1.2, 4.1};
    double smaller, bigger, diff;
    int i;

    for (i = 1, smaller = *d1, bigger = *d1; i < sizeof(d1) / sizeof(*(d1)); i++)
        smaller = *(d1 + i) > smaller ? smaller : *(d1 + i), bigger = *(d1 + i) < bigger ? bigger : *(d1 + i);

    printf("bigger = %f\tsmaller = %f\tdiff = %f\n", bigger, smaller, bigger - smaller);
        


    return 0;

}
