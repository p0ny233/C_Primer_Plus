#include <stdio.h>

int c_strlen(char *);

int main(void)
{
    char name[] = "Hello world";
    printf("len(name) = %d\n", c_strlen(name));
}

int c_strlen(char * s)
{
    int count = 0;
    while (*s)
        count++, s++;

    return count;
}
