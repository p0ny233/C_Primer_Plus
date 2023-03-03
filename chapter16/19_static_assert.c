#include <stdio.h>
#include <limits.h>

_Static_assert(CHAR_BIT == 16, "16-bit char flasely assumed");

int main(void)
{
    puts("char is 16 bits.");

    return 0;
}
