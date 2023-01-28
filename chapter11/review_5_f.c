#include <stdio.h>

char * pr(char * str)
{
    char * pc;
    pc = str;
    while (*pc)
        putchar(*pc++);

    do {
        putchar(*pc--);
    }while (pc - str);


    return pc;
}

int main(void)
{
    char * x = pr("");


    return 0;
}
