#include <stdio.h>

int put1(const char *);

int main(void)
{
    char * a = "admin";
    put1(a);


    return 0;
}

int put1(const char * s)
{

    int count = 0;
    while (*s)
    {
        putchar(*s++);
        count++;
    }
    return count;
}
