#include <stdio.h>

char * pr(char * str)
{
    char * pc;
    pc = str;
    while (*pc)
        putchar(*pc++);

    /*
    eg1: 

    do {
        putchar(*pc--);

    }while(pc - str >= 0);
    */

    // eg2: 

    do {
        putchar(*--pc);
    }while (pc - str);


    return pc;
}

int main(void)
{
    char * x = pr("Ho Ho Ho!");


    return 0;
}
