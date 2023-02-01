#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char * s_gets(char * st, int n);
void defaultPrintf(char * s);
void ToupperPrintf(char * s);
void TolowerPrintf(char * s);

int main(int argc, char ** argv)
{

    int i;

    if (argc == 2)
    {
        defaultPrintf(*(argv + argc - 1));
    }
    else if (argc > 2)
    {
        for (i = 1; i < argc - 1; i++)
        {
            if (!strncmp(*(argv + i), "-u", 2))
                ToupperPrintf(*(argv + argc - 1));
            else if (!strncmp(*(argv + i), "-l", 2))
                TolowerPrintf(*(argv + argc - 1));
            else if (!strncmp(*(argv + i), "-p", 2))
                defaultPrintf(*(argv + argc - 1));
            else 
            {
                puts("Usage: ./a.out [-p/-u/-l] content");
                exit(0);
            }

        }
    }
    else 
    {
        
        puts("Usage: ./a.out [-p/-u/-l] content");
        exit(0);
    }


    return 0;
}

void defaultPrintf(char * s)
{
    puts(s);
}

void ToupperPrintf(char * s)
{
    while (*s)
    {
        putchar(toupper(*s));
        s++;
    }

    putchar('\n');

}


void TolowerPrintf(char * s)
{
    while (*s)
    {
        putchar(tolower(*s));
        s++;
    }
    putchar('\n');
}


char * s_gets(char * st, int n)
{
    char * ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\0' && *st != '\n')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n');
    }

    return ret_val;
}
