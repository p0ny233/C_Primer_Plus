#include <stdio.h>

void t1(void)
{

    int flag;
    flag = 1;
    if (flag)
        printf("%d is true\n", flag);
    else
        printf("%d is false\n", flag);

    flag = 0;
    if (flag)
        printf("%d is true\n", flag);
    else
        printf("%d is false\n", flag);

    flag = -1;

    if (flag)
        printf("%d is true\n", flag);
    else
        printf("%d is false\n", flag);
    
    printf("\nfinished\n");

    return;

}

void t2(void)
{
    
    int n = 3;
    while (n)
        printf("%d is true\n", n--);

    printf("%d is false\n", n);

    n = -3;
    while (n)
        printf("%d is true\n", n++);

    printf("%d is false\n", n);
}

int main(void)
{
    t2();

    return 0;

}
