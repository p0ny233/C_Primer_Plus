#include <stdio.h>

#define name "\"Guar,jonsf\""


int main(void)
{

    printf("a : %s\n", name);
    printf("b : %20s\n", name);
    printf("c : %-20s\n", name);
    printf("d : %15s\n", name);

    
    return 0;

}
