#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
    int i;
    int total = 0;
    for (i = 0; i <= LIMIT; i++)
    {
        total += 2 * i*i + 1;
#undef JUST_CHECKING
#ifdef JUST_CHECKING
        printf("i = %d, running total = %d\n", i, total);
#else
        printf("total = %d\n", total);
#endif
    }

    printf("Grand total = %d\n", total);

    return 0;
}



