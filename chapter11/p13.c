#include <stdio.h>

int main(int args, char * argv[])
{
    for (;args > 1; args--)
        printf("%s ", (*(argv + args - 1)));

    return 0;
}
