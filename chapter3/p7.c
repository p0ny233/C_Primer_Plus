#include <stdio.h>

#define inch2cm 2.54

int main(void)
{
    int inch;

    double cm;

    printf("Please Enter Inch: ");

    scanf("%d", &inch);

    cm = inch * inch2cm;

    printf("result = %f\n", cm);

    return 0;

}
