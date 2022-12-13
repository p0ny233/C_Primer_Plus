#include <stdio.h>

void show_array(const double ar[], int n);
void mult_array(double ar[], int n, int val);

#define SIZE 5

int main(void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
    const double dip2[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
    /*

    printf("The original dip array:\n");
    show_array(dip, SIZE);

    mult_array(dip, SIZE, 2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip, SIZE);

    */

    printf("The original dip2 array:\n");
    show_array(dip2, SIZE);

    mult_array(dip2, SIZE, 2.5);
    printf("The dip2 array after calling mult_array():\n");
    show_array(dip2, SIZE);

    return 0;
}

void show_array(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%8.3f ", ar[i]);
    
    putchar('\n');
}

void mult_array(double ar[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        ar[i] *= val;

}


