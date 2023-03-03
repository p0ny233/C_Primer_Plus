#include <stdio.h>

inline void test1(int a, int b)
{
    printf("a = %d, b = %d",a ,b);
}

extern void test1(int, int);

int main(void)
{

    test1(1, 2);
}
