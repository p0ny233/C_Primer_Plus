#include <stdio.h>
#include <string.h>

#define SIZE 10

char * s_gets(char *, int);


int main(void)
{
    char name[SIZE];
    char * str;

    while (1)
    {
        str = s_gets(name, SIZE);
        if (str)
            puts(str);
    }
    return 0;
}

char * s_gets(char * st, int n)
{
    char * pc;
    char * t1;

    pc = fgets(st, n, stdin);
    if (pc)
    {
        t1 = strchr(pc, '\n');
        if (t1)
        {
            *t1 = '\0';
        }
        else
        {
            while (getchar() != '\n');
        }

    }

    return pc;
}
