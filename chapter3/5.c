#include <stdio.h>

void test(void);

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n",big ,big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    test();
    return 0;



}


void test(void)
{
    printf("%d %d %d\n", sizeof(1), sizeof(65537), sizeof(12345678908642));
    return;
}
