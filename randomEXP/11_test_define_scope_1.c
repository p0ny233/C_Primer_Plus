#include <stdio.h>
#define var_a 3
extern int demo1();

int main(void)
{

    printf("var_a = %d\n", var_a);
    demo1();
    return 0;
}
