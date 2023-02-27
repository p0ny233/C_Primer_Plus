#include <stdio.h>

#define LEN 10


void transform(double * src, double * tar, int n, double (*fptr) (double n ));
double test1(double n);



int main(void)
{

    int i;

    double src[LEN] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    double tar[LEN] = {0.0};

    printf("src : ");
    for (i = 0; i < LEN; i++)
        printf("%5.2f\t", *(src + i));


    printf("\ntar : ");

    for (i = 0; i < LEN; i++)
        printf("%5.2f\t", *(tar + i));

    putchar('\n');

    transform(src, tar, LEN, test1);

    printf("src : ");
    for (i = 0; i < LEN; i++)
        printf("%5.2f\t", *(src + i));


    printf("\ntar : ");

    for (i = 0; i < LEN; i++)
        printf("%5.2f\t", *(tar + i));

    putchar('\n');

    return 0;

}

double test1(double n)
{
    return n / 2.0;
}

void transform(double * src, double * tar, int n, double (*fptr) (double n ))
{
    int i;
    for (i = 0; i < n; i++)
        *(tar + i) = fptr(*(src + i));
}
