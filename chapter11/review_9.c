#include <stdio.h>

#define SIZE 40

char * s_gets(char *, int);

int main(void)
{
    char name[SIZE];
    char * ps;

    while (ps = s_gets(name, SIZE))
    {
        puts(ps);
    }

    


    return 0;
}

char * s_gets(char * st, int n)
{   
    char * pstr;
    st = fgets(st, n, stdin);
    pstr = st;
    if (pstr)
    {
        while (*pstr != '\0' && *pstr != '\n')
            pstr++;
        if (*pstr == '\n')
            *pstr = '\0';
        else 
            while (getchar() != '\n');
    }
    return st;
}
