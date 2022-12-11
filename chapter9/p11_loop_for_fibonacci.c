#include <stdio.h>

void fibonacci(int n);

int main(void)
{
    int n;
    while(scanf("%d", &n))
    {
        fibonacci(n);
        putchar('\n');
    }

    return 0;

}

void fibonacci(int n)
{
    int i;
    int nex;
    int pre;

    int result;

    pre = result = 0;
    nex = 1;

    if (n == 0)
    {
        printf("%d\n", result);
        return;
    }
    else if (n == 1)
    {
        result = nex;
        printf("%d\n", result);
        return;
    }

    printf("%d %d ", pre, nex); 

    for (i = 0; i < n - 1; i++)
    {
        result = pre + nex;

        printf("%d", result);
        putchar(' ');
        pre = nex;
        nex = result;

    }

    return;

}
