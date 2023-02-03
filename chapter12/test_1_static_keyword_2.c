#include <stdio.h>

static int a = 991;

int main(void)
{

    printf("outter block a = %d at %p\n", a, &a);

    {
        static int a = 111;
        printf("inner block a = %d at %p\n", a, &a);
    }

    return 0;
}

