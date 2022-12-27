#include <stdio.h>

int main(void)
{

    char name[11], name1[11];
    int count;

    count = scanf("%5s%10s", name, name1);

    printf("I read the %d names %s and %s.\n", count, name, name1);

    return 0;
}
