#include <stdio.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{
    
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    printf("%d\n", WIDTH);
    starbar();


    return 0;

}

void starbar(void)
{

    int count;
    for (count = 0; count < 40; count++)
        printf("*");

    printf("\n");

}
