#include <stdio.h>

int put2(const char *);

int main(void)
{
    int len;
    char a[] = "pizza";

    len = put2(a);
    printf("len = %d\n", len);


    return 0;
}

int put2(const char * s)
{

    int count = 0;

    while (*s)
    {
        count ++;
        putchar(*s++);
    }

    putchar('\n');

    return count;
}
