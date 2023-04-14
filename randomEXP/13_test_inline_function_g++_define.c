// no finished
#include <stdio.h>
#define FORCE_FUNCTION __attribute__((always_inline))

inline static int demo1(int a, int b);
//FORCE_FUNCTION inline int demo1(int a, int b);


int main(void)
{

    printf("result = %d\n", demo1(1, 2));

    return 0;
}

int demo1(int a, int b)
{

    return a < b ? a : b;
}
