#include <stdio.h>

int main(void)
{

    int a = 2;
    for (int a = a; a < 3; a++)
    {
        a = 3;
        printf("a = %d\n", a);
        int a = 99;
        printf("a = %d\n", a);

    }
    return 0;
}
