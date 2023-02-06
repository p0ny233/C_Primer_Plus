#include <stdio.h>

int test();

int main(void)
{

    int a = 0;
    int count;

    while (a < 5)
    {
        count = test();
        a++;
    }

    printf("call test(): %d\n", count);

    return 0;
}


int test()
{
    static int call_count;
    ++call_count;

    return call_count;
}

