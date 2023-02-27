#include <stdio.h>

int main(void)
{
    int a = 0;
    
    for (; a < 9; a++)
    {
        if (a == 3)
            #define EQU
            #ifdef EQU
            printf("a = 3");
            #else
            printf("a = 2");
            #endif
    }

    return 0;
}
