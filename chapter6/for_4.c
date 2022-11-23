#include <stdio.h>

int main(void)
{

    int num;
    printf("    n   n   cubed\n");
    for (num = 1; num * num * num < 216; num++)
        printf("%5d %9d\n", num, num * num * num);


    return 0;

}
