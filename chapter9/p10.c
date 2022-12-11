#include <stdio.h>

void to_binary(int n, int p);

int main(void)
{
    int n, p;

    while (scanf("%d %d", &n, &p) == 2)
    {
        to_binary(n, p);
        putchar('\n');
    }


    return 0;

}

void to_binary(int n, int p)
{
    if (n > p - 1)
        to_binary( n / p, p);

    putchar(n % p + '0');
}
