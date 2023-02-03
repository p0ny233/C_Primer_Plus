#include <stdio.h>

void trystat(void);

int main(void)
{

    for (int n = 0; n < 3; n++)
    {
        printf("Here comes iteration %d:\n", n);
        trystat();
    }

    return 0;
}

void trystat(void)
{

    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d\n", fade++, stay++);
}
