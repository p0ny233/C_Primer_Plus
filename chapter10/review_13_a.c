#include <stdio.h>

void show(const double ar[], int n);
void show2(const double ar2[][3], int n);

int main(void)
{

    show((double []) {8.0, 3.0, 9.0, 2.0}, 4);
    show2((double [][3]) {{8, 3, 9}, {5, 4, 1}}, 2);
    
    return 0;

}

void show(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%f\n", ar[i]);

}

void show2(const double ar[][3], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < 3; j++)
            printf("%f\n", *(*(ar + i) + j));

}
