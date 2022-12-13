#include <stdio.h>
void t1(int *);
void t2(int *);
void t3(int *);
void t4(int *);
void t5(void);

int main(void)
{

    int a[] = {1, 3, 5, 7, 9, 0, 13, 22, 33, 44, 55};
    //t1(a);
    //t2(a);
    //t3(a);
    //t4(a);
    t5();

    return 0;

}

void t1(int * pa)
{
    int a = *++pa;
    printf("a = %d\n", a);
}

void t2(int * pa)
{
    int a = ++*pa;
    printf("a = %d\n", a);

}

void t3(int * pa)
{
    int a = *pa++;
    printf("a = %d\n", a);

}

void t4(int * pa)
{
    int a = (*pa)++;
    printf("a = %d\n", a);

}

void t5(void)
{
    int i = 2;
    int a[] = {1,3,5,7};

    for (i = 0; i < 4; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
        printf("*(a+%d) = %d\n", i, *(a + i));
        // printf("*(a+%d) = %d\n", i, *(a++)); // error

    }


}
