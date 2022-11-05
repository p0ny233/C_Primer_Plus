#include <stdio.h>

void br(void)
{

    printf("Brazil, Russia");
    return;

}

void ic(void)
{
    printf("India, China\n");

}

int main(void)
{
    br();

    printf(", ");

    ic();
    
    ic();
    br();

    printf("\n");
    return 0;

}
