#include <stdio.h>

int main(void)
{
    int i, total;
    double temp;
    double d2[] = {1.3, 1.5, 2.3, 5.6, 8.1};

    for (i = 0, total = sizeof(d2) / sizeof(*(d2)); i < total - i; i++)
    {
        temp = *(d2 + i);
        *(d2 + i) = *(d2 + total - i - 1);
        *(d2 + total - i - 1) = temp;
    }

    for (i = 0; i < total; i++)
    {
        printf("%f\n", *(d2 + i));
    }
    

    return 0;

}
