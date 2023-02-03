#include <stdio.h>

void test_1();

int main(void)
{

    test_1();
    test_1();

    return 0;
}

void test_1()
{

    static int a = 1;
    printf("a = %d\n", a);
    a++;
}
