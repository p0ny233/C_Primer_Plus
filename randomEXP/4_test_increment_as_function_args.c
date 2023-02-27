#include <stdio.h>

void test(int a);

int main(void)
{
    int a = 1;


    test(++a);


    return 0;
}

void test(int a)
{
    printf("a is %d.\n", a);
}
