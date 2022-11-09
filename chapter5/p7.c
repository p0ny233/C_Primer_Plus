#include <stdio.h>

double compute(double num)
{

    return num * num * num;
}

int main(void)
{

    double num;

    printf("enter a number: ");

    scanf("%lf", &num);

    printf("num = %f\n", compute(num)); 

    return 0;

}
