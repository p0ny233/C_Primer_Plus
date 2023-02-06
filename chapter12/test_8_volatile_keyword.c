#include <stdio.h>

int test1();
int test2();

int main()
{
    test1();
    test2();

    volatile int * a = (int *)1;
    *a++;
}

int test1()
{
    int a= 0;
    if (a == 0)
    {
        printf("a = %d\n", a);
    }

}

int test2()
{
    volatile int a= 0;
    if (a == 0)
    {
        printf("a = %d\n", a);
    }
}
